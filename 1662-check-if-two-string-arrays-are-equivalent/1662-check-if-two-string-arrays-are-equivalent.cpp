class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1,w2;
        for(string i : word1)
            w1+=i;
        for(string i : word2)
            w2+=i;
        if(w1==w2)
            return true;
        else
            return false;
    }
};