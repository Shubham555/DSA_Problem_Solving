class Solution {
public:
    int minimumSum(int num) {
        int index = 0;
        vector<int> dig(4);

        while(num>0){
            dig[index++] = num%10;
            num = num/10;
        }
        sort(dig.begin(),dig.end());
        return dig[0]*10 + dig[2] + dig[1]*10 + dig[3];
    }
};
