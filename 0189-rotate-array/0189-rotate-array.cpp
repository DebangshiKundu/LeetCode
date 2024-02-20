class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        if (k==nums.size() or k==0) return;
        int j=0,i=0+k,temp=nums[0],prev=0,c=nums.size();
        while(c!=0){
            temp=nums[j];
            while(i!=j){
                prev=nums[i];
                nums[i]=temp;
                temp=prev;
                i=(i+k)%nums.size();
                c--;
            }
            nums[i]=temp;
            c--;
            if(i==j and c>0){
                j++;
                i=j+k;
            }
        }
    }
};