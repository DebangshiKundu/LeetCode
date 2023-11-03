class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int a=nums[0],b=nums[0];
        // do
        // {
        //     a=nums[a];
        //     b=nums[nums[b]];
        // }while(a!=b);
        // a=nums[0];
        // while(a!=b)
        // {
        //     a=nums[a];
        //     b=nums[b];
        // }
        // return b;
        int left = 1;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            int count = 0;

            for (int num : nums) {
                if (num <= mid) {
                    count++;
                }
            }

            if (count > mid) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};