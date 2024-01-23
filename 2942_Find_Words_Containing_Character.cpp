class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int n = words.size();

        for(int i =0; i<n; i++){
            if(count(words[i].begin(), words[i].end(), x) > 0){
                   ans.push_back(i);
            }
        }
        return ans;
    }
};
