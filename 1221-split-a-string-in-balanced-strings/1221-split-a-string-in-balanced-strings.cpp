class Solution {
public:
    int balancedStringSplit(string s) {
        int CntR=0, CntL=0;
        int MaxBalstrings=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                CntR++;
            }
            else{
                CntL++;
            }
            if(CntR==CntL) MaxBalstrings++;
        }
        return MaxBalstrings;
    }
};