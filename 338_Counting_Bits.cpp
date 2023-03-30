class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans(n+1,0);
        for(int i=0;i<=n;i++){
            int num = i;
            int count = 0;
            while(num){
                count += num%2;
                num/=2;
            }
            ans[i] = count;
        }
        return ans;
    }
};
