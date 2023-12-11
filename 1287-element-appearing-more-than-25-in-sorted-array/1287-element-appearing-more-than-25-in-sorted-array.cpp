class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int m=arr.size()/4,c=1;
        for(int i=1;i<arr.size();i++)
        {
            while(i<=arr.size()-1 and arr[i-1]==arr[i])
            {
                c++;
                i++;
            }
            if(c>m)
                return arr[i-1];
            c=1;
        }
        return arr[0];
    }
};