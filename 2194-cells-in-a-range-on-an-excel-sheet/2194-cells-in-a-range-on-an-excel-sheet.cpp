class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector <string> ans;
        char c1=s[0], r1 = s[1],c2 = s[3],r2 = s[4];
        
        for(int i=0;i+c1<=c2;i++){
            
            for(int j=0;j+r1<=r2;j++){
              
                string res;
                res+=(c1+i);
                res+=(r1+j);
                ans.push_back(res);
            }
        }
        return ans;
    }
};