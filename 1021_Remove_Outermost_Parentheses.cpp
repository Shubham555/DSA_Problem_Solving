class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans;
        for(int i=0;i<s.size();i++){
            char ch = s[i];

            if(ch=='('){
                if(st.size() > 0){
                    ans += ch;
                }
                st.push(ch);
            }
            else{
                st.pop();
                if(st.size() > 0){
                    ans += ch;
                }
            }
        }
        return ans;
    }
};
