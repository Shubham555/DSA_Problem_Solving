class Solution {
public:
    int compress(vector<char>& chars) {
        
       int i =0;
       int ansindex = 0;
       int n = chars.size();
        
        while(i<n){
           int j = i+1;
           
           while( j<n && chars[i] == chars[j] ){
               j++;
           }
           //ye kab hoga.
           //ya toh poora vector traverse kardia.
           //ya fir New/different character mil gaya hai.
           
           //old char store kardo 
           
           chars[ansindex++] = chars[i];
           int count = j - i; //count nikal liya.
           
           if(count>1){
             // storing count in ansindex by converting int counting into single
             // digit char.
             string cnt = to_string(count);
               for(char ch : cnt){
                   chars[ansindex++] = ch;
               }
           }
           //Moving to new/diferent character.
           i = j; // i ko badhya bs i+1 kiya.
       } 
       return ansindex ;
    }
};
