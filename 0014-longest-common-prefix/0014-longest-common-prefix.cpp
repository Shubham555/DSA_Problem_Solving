class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int count=0, MinStrLen= 1000;
       string MinStr;
       for(int i=0;i<strs.size();i++){
           int len = strs[i].length();
           if(len<MinStrLen){
               MinStrLen = len;
               MinStr = strs[i];
           }
       }
       for(int i =0;i<MinStrLen;i++){
           for(int j=0;j<strs.size();j++){
               if(strs[j][i] != MinStr[i])
               return MinStr.substr(0,count);    
           }
           count++;
       }
         return MinStr.substr(0,count);    
    }
};