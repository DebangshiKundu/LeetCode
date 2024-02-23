class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()>2){
        nums[2]+=nums[0];
        for(int i=3;i<nums.size();i++){
            nums[i]=max(nums[i]+nums[i-2],nums[i]+nums[i-3]);
        }
        return *max_element(nums.begin(), nums.end());
        }
        else return *max_element(nums.begin(),nums.end());
    }
};