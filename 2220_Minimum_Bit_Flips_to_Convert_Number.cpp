class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num = start ^ goal;
        int cnt =0;
        while(num!=0){
            num = num & (num-1);  // Right most set bit Cancelling one after one and no of time cancelled get Counted.
            cnt++;
        }
        return cnt;
    }
};
