class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //     int count=0,i=0,j=0;
    //     for(i=0;i<nums.size();i++){
    //         if(i<nums.size()-1 and nums[i]==nums[i+1])
    //             count++;
    //         else count=0;
    //         if(count<2)
    //             nums[j++]=nums[i];
    //     }
    //     return j;
    
    
        int i=0;
        for(int num: nums){
            if(i==0 or i==1 or nums[i-2]!=num)
                nums[i++]=num;
        }
        return i;
    }
};