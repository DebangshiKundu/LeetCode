class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> res;
        if(finalSum%2==1)
            return res;
        else
        {
            long long i=2,sum=0;
            while(sum+i<=finalSum)
            {
                res.push_back(i);
                sum+=i;
                i+=2;
            }
            long long num=finalSum-sum;
            res[res.size()-1]+=num;
            return res;
        }
    }
};