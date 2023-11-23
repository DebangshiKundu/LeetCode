class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> result(l.size(),true);
        vector<int> res;
        for(int i=0;i<l.size();i++)
        {
            for(int j=l[i];j<=r[i];j++)
                res.push_back(nums[j]);
            sort(res.begin(),res.end());
            for(int k=1;k<res.size();k++)
                if(res[k] - res[k-1] != res[1] - res[0])
                {
                    result[i]=false;
                    break;
                }
            res.clear();
        }
        return result;
    }
};