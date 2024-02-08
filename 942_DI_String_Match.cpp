class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> v;
        int low = 0;
        int high = s.size();
        for(int i = 0; i<=s.size(); i++){
             if(high == low ){      // Condition for adding that extra integer in the last Position.
                 v.push_back(high);
             }
             else if(s[i]== 'I'){   // Normal Conditions for adding integer according to 'I' OR 'D'.
                 v.push_back(low);
                 low++;
             }
             else if(s[i] == 'D'){  // Normal Conditions for adding integer according to 'I' OR 'D'.
                    v.push_back(high);
                    high--;
             }
        }
        return v;
    }
};
