class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> freq (n+1,0);
        for(auto a:trust){
            freq[a[1]]++;
            freq[a[0]]--;
        }
        for(int i=1;i<freq.size();i++)
            if (freq[i]==n-1)
                return i;
        return -1;
    }
};