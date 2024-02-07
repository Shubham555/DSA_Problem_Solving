class Solution {
public:
    int countKeyChanges(string s) {
        int Count = 0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i] != s[i+1] && s[i] + 32 != s[i+1] && s[i] - 32 != s[i+1]){
                  Count++;
            }
        }
        return Count;
    }
};
