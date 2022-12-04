class Solution {
public:
    int countAsterisks(string s) {
        int count =0;
        int vbar = 0;
        
       for(int i=0;i<s.size();i++){
           if(s[i]=='|'){
               vbar++;
           }
           if(vbar%2==0 && s[i]=='*'){
               count++;
           }
       }
        return count;
    }
};