class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // // int c=0,maxc=0,res=nums[0];
        // // for(int i=1;i<nums.size();i++){
        // //     if(nums[i]==nums[i-1])
        // //         c++;
        // //     else c=0;
        // //     maxc=max(maxc,c);
        // //     res=nums[maxc];
        // // }
        // // return res;
        
        
        // return nums[nums.size()/2];
        
//         without sorting the array:
        unordered_map<int,int> freq;
        for(int n:nums)
            freq[n]++;
        int n=nums.size()/2;
        for(auto x:freq)
            if(x.second>n)
                return x.first;
        return 0;
    }
};