class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0;
        for(i=0;i<nums.size();i++)
        {
            for(j=i;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
    }
};