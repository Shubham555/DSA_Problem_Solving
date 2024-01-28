class Solution {
public:
    string finalString(string s) {
        string str  ="";
        int n = s.size();

        for(int i=0; i<n; i++){
               if(s[i]=='i'){
                   reverse(str.begin(),str.end());
               }
               else{
                   str.push_back(s[i]);
               }
        }
        return str;
    }
};
