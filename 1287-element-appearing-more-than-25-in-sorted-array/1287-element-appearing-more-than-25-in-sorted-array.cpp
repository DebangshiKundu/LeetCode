class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> num;
        for(int i:arr)
            num[i]++;
        int t=arr.size()/4;
        for(auto& [key,value]:num)
        {
            if(value>t)
                return key;
        }
        return -1;
    }
};