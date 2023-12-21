class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> x;
        for(int i=0;i<points.size();i++)
            x.push_back(points[i][0]);
        int lar=0;
        sort(x.begin(),x.end());
        for(int i=0;i<x.size()-1;i++)
            lar=max(lar,abs(x[i]-x[i+1]));
        return lar;
    }
};