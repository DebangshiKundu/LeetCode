class Solution {
public:
    int stairs(int n,vector<int> &arr)
    {
        if(n==1 or n==2)
            return n;
        if(arr[n]==0)
        {
            arr[n]=stairs(n-1,arr)+stairs(n-2,arr);
        }
        return arr[n];
    }
    int climbStairs(int n) {
        vector<int> arr(n+1,0);
        return stairs(n,arr);
    }
};