class Solution {
public:
    bool isPalindrome(int x) {
       stack<int> s;
        int num=x;
        if(num<0)
            return false;
        while(x>0)
        {
            s.push(x%10);
            x/=10;
        }
        while(!s.empty())
        {
            if(num%10 != s.top())
                return false;
            else
            {
                s.pop();
                num/=10;
            }
        }
        return true;
    }
};