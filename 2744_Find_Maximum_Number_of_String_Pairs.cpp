class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        vector <string> rev;
        int n = words.size();
        for(int i=0; i<n; i++){
            string str = words[i];
            reverse(str.begin(),str.end());
            rev.push_back(str);
        }
        int ans = 0 ;
        for(int i =0; i<n; i++){
            for(int j=0; j<n; j++){
                if(words[i] == rev[j] && i<j ){
                    ans++;
                }
            }
        }
        return ans;
    }
};
