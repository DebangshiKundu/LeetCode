class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        for(int i=0;i<temperatures.size();i++){
            int count=1,j=i+1;
            if(i>0 and temperatures[i-1]==temperatures[i]){
                if(ans.back()!=0)
                    ans.push_back(ans.back()-1);
                else
                    ans.push_back(ans.back());
                continue;
            }
            while(j<temperatures.size() and temperatures[j]<=temperatures[i]){
                count++;
                j++;
            }
            if(j==temperatures.size())
                ans.push_back(0);
            else
                ans.push_back(count);
        }
        return ans;
    }
};