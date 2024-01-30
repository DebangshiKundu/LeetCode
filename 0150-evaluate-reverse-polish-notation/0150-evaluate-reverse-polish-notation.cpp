class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;  
        for (int i = 0; i < tokens.size(); i++) {
            if (isdigit(tokens[i][0]) || (tokens[i].size() > 1 && tokens[i][0] == '-')) {
                s.push(std::stoi(tokens[i]));
            } else {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                if (tokens[i] == "+")
                    s.push(b + a);
                else if (tokens[i] == "-")
                    s.push(b - a);
                else if (tokens[i] == "*")
                    s.push(b * a);
                else if (tokens[i] == "/")
                    s.push(b / a);
            }
        }
        return s.top(); 
    }
};
