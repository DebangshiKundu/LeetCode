class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0,m=1;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==m)
                m++;
            if(nums[i]>m)
                break;
        }
        return m;
    }
};