class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int min=0,i=0,g=0,p=0,m=0;
        for(i=garbage.size()-1;i>=0;i--)
        {
            min+=garbage[i].size();
            if(g==0 and garbage[i].find('G')!=-1) g=i;
            if(p==0 and garbage[i].find('P')!=-1) p=i;
            if(m==0 and garbage[i].find('M')!=-1) m=i;
        }
        min+=accumulate(travel.begin(),travel.begin()+g,0);
        min+=accumulate(travel.begin(),travel.begin()+p,0);
        min+=accumulate(travel.begin(),travel.begin()+m,0);
        return min;
    }
};
