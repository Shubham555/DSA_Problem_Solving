class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string con1 = "";
        string con2 = "";
        for(int i=0;i<word1.size();i++){
            con1 = con1 + word1[i];
        }
         for(int j=0;j<word2.size();j++){
            con2 = con2 + word2[j];
        }
        return con1==con2;
    }
};