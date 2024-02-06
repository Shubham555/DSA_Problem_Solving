class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int n = word1.size() , m = word2.size();

        for(int i=0; i<m+n; i++){
            if(i<n){
                s.push_back(word1[i]);
            }
            if(i<m){
                s.push_back(word2[i]);
            }

        }
        return s;
    }
};
