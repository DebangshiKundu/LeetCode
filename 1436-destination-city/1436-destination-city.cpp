class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string dest=paths[0][1];
        bool flag=true;
        while(flag==true){
            for(int i=0;i<paths.size();i++){
                flag=false;
                if(dest==paths[i][0]){
                    dest=paths[i][1];
                    flag=true;
                    break;
                }
            }
        }
        return dest;
    }
};