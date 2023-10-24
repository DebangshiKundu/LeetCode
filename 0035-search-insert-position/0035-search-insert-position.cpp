class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==target)
                return j; 
            if(target>nums[j])
                i=j+1;
        }
        return i;
        
    }
};