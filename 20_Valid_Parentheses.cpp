class Solution {
public:
    bool isValid(string x) {
       stack<char> st;
      
      for(int i=0;i<x.size();i++)
      {
          if(st.empty())
          {
              st.push(x[i]);
          }else if(x[i]==')' && st.top()=='(' || x[i]=='}' && st.top()=='{' || x[i]==']' && st.top()=='['  )
          {
              st.pop();
          }else
          {
              st.push(x[i]);
          }
      }
      
      
      return st.size()==0;
    }
};
