class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> prices(n,INT_MAX);
        prices[src]=0;
        for(int i=0;i<k+1;i++){
            vector<int> temp(prices);
            for (auto a:flights)
                if(prices[a[0]]!=INT_MAX and prices[a[0]]+a[2]<temp[a[1]])
                    temp[a[1]]=prices[a[0]]+a[2];
            prices=temp;              
        }
        return (prices[dst]==INT_MAX)? -1:  prices[dst];               
    }
};
