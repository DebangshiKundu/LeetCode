class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0,maxc=0,res=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])
                c++;
            else c=0;
            maxc=max(maxc,c);
            res=nums[maxc];
        }
        return res;
    }
};