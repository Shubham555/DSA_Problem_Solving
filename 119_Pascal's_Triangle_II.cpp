class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ansRow;
        long long ans =1;
        ansRow.push_back(ans);
        for(int col = 1; col<=rowIndex; col++){
            ans = ans*(rowIndex+1 -col);
            ans = ans/(col);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
};
