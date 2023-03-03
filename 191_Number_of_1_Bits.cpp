class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;

        while(n!=0){ 
            n = n & (n-1);  //it removes rightmost set bit.
            count++;
        }
        return count;
    }
};
