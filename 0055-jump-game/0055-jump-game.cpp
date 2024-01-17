class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums[0]==0 and nums.size()!=1)
            return false;
        // if (nums.size()==1)
        //     return true;
        int i=0,j=nums[0];
        while(i<=j){
            if(nums[i]>=nums.size()-i-1)
                return true;
            j=max(nums[i]+i,j);
            i++;
        }
        return false;
    }
};