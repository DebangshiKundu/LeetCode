class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freq(26,0);
        for(int i=0;i<s.length();i++)
            freq[(int)s[i]-97]++;
        for(int i=0;i<t.length();i++)
            freq[(int)t[i]-97]--;
        int c=0;
        for(int i:freq){
            cout<<i<<" ";
            if(i<0)
                c-=i;
            else
                c+=i;
        }
        return c/2;
    }
};