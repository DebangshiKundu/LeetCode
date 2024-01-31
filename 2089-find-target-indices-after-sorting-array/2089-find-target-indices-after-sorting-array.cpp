class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0;i<nums.size();i++)
            for(int j=0;j<nums.size();j++){
                if(nums[i]<nums[j])
                    swap(nums[i],nums[j]);
            }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                res.push_back(i);
        }
        return res;
    }
};