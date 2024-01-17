class Solution {
public:
    int jump(vector<int>& nums) {
        int res=0,i=0,j=0,step=0;
        for(i=0;i<nums.size()-1;i++){
            step=max(step,i+nums[i]);
            if(i==j){
                j=step;
                res++;
            }
        }
        return res;
    }
};