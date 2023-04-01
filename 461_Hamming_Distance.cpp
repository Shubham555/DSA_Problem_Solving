class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = 0;
        int num = x^y;

        while(num!=0){
            result += num%2; 
            num >>= 1; // num = num >> 1;
        }
        return result;
    }
};
