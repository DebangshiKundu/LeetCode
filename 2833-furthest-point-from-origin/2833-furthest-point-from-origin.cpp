class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int r=0,l=0,d=0;
        for(int i=0;i<moves.length();i++)
        {
            if(moves[i]=='L')
                l++;
            else if(moves[i]=='R')
                r++;
            else
                d++;
        }
        if(l>r)
            return l-r+d;
        else if(l<r)
            return r-l+d;
        else
            return d;
    }
};