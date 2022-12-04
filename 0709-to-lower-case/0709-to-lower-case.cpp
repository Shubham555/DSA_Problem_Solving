class Solution {
public:
    string toLowerCase(string s) {
       string ans;
       for(int i =0;i<s.size();i++){
               int a = int(s[i]);
               if (a >= 65 && a<=90){
                  ans += (s[i] + 32);
               }
           else{
               ans = ans + s[i];
           }
       }
        return ans;
    }
};