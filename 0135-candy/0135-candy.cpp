class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> count(ratings.size(),1);
        int ans=0;
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1])
                count[i]=count[i-1]+1;
        }
        for(int i=ratings.size()-1;i>0;i--){
            if(ratings[i-1]>ratings[i] and count[i-1]<=count[i])
                count[i-1]=count[i]+1;
        }
        for(int x: count)
            ans+=x;
        return ans;
    }
};