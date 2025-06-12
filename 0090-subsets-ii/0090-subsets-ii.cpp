class Solution {
public:
    void backtrack(vector<vector<int>>& res, vector<int> & path, int start,vector<int>& nums){
        res.push_back(path);
        for (int i=start;i<size(nums);i++){
            if (i > start && nums[i] == nums[i - 1]) continue;
            path.push_back(nums[i]);
            backtrack(res,path,i+1,nums);
            path.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        sort(nums.begin(),nums.end());
        
            backtrack(res,path,0,nums);
            return res;

    }
};