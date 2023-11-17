class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int i=0,j=0,m=0;
        sort(nums.begin(),nums.end());
        for(i=0,j=nums.size()-1;i<j;i++,j--)
            m=max(m,nums[i]+nums[j]);
        return m;
    }
};