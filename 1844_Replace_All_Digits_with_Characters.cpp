class Solution {
public:
    string replaceDigits(string s) {
       for(int i=1;i<s.size();i+=2){
          s[i] = (int)s[i] - 48 + (int)(s[i-1]);
       } 
       return s;
    }
};
