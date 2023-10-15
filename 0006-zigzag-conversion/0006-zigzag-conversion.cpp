class Solution {
public:
    string convert(string s, int numRows) {
       int len = s.length();
        if (numRows >= len || numRows == 1) {
            return s;
        }
        
        string res(len, ' '); 
        
        int k = 0;
        int cycleLen = 2 * numRows - 2;
        
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j + i < len; j += cycleLen) {
                res[k++] = s[j + i];
                if (i != 0 && i != numRows - 1 && j + cycleLen - i < len) {
                    res[k++] = s[j + cycleLen - i];
                }
            }
        }
        return res;
    }
};