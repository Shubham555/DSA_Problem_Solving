class Solution {
public:
    string removeTrailingZeros(string num) {
        int last_index = 0 ;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i] == '0'){
               continue;
            }
            else{
                last_index = i;
                break;
            }
        }
        return num.substr(0,last_index+1); 
    }
};
