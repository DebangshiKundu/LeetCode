class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> m;
        int c=0;
        for(auto i : nums1)
            m.push_back(i);
        for(auto i : nums2)
            m.push_back(i);
        sort(m.begin(),m.end());
        int n=m.size();
        if(n%2==1)
            return m[n/2];
        else
            return (m[n/2]+m[(n/2)-1])/2 ;
            
    }
};