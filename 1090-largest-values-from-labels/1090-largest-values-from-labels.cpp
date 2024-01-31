class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int score=0,count=0;
        unordered_map<int,int> used;
        while(count<numWanted && !values.empty()){
            int lar=0;
            for(int i=0;i<values.size();i++)
                if(values[i]>values[lar])
                    lar=i;
            used[labels[lar]]++;
            if(used[labels[lar]]<=useLimit){
                score+=values[lar];
                count++;
                // cout<<values[lar]<<endl;
            }
            values.erase(values.begin()+lar);
            labels.erase(labels.begin()+lar);
        }
        return score;
    }
};