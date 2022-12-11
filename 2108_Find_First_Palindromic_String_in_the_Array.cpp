class Solution {
public:

 
    bool ispalindrome(string s)
    {
        int i=0;
        int j=s.size()-1;
         
         while(i<=j)
         {
             if(s[i]!=s[j])
             {
                 return false;
             }
             i++;
             j--;
         }
       return true;
    }

      

    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(ispalindrome(words[i])==true)
            {
                return words[i];
            }
        }
        return "";
    }
};
