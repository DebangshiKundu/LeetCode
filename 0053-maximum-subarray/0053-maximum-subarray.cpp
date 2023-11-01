class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0,sum=nums[0],m=nums[0];
        for(i=1;i<nums.size();i++)
        {
            sum=max(nums[i],sum+nums[i]);
            m=max(m,sum);
        }
        return m;
    }
};