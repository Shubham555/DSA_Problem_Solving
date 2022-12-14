class Solution {
public:
    int xorOperation(int n, int start) {
        //No need to create any array bcoz we can get all array elements at a time by the Given relation.
        int ans=0;;
        for(int i=0;i<n;i++){
            ans ^= start + (2*i);
        }
        return ans;
    }
};
