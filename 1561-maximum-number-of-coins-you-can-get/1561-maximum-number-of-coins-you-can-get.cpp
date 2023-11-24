class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int m=0,i=0,j=0;
        sort(piles.begin(),piles.end(),greater<int>());
        for(i=1,j=piles.size()-1;i<j;i=i+2,j--)
            m+=piles[i];
        return m;
    }
};