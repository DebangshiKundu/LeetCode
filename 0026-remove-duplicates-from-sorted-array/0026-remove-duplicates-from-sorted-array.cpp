class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // if (nums.empty())
        //     return 0;
        // int k=1;
        // for(int i=1;i<nums.size();i++)
        // {
        //     if (nums[i]!=nums[i-1])
        //         nums[k++]=nums[i];
        // }
        // return k;
        
        int i=0;
        for(int num:nums){
            if(i==0 or nums[i-1]!=num)
                nums[i++]=num;
        }
        return i;
    }
};