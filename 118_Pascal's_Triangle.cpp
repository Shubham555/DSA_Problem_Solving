class Solution {
public:
    vector<int> generateRow(int row){
        vector<int> ansRow;
        long long ans =1;
        ansRow.push_back(ans);
        for(int col = 1; col<row; col++){
            ans = ans*(row-col);
            ans = ans/(col);
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    /*
    Row 3
    ans = 1 * (3 - 1) = (2)/1 = 2;
    ans = 2 * (3 - 2) = (2)/2 = 1;
    Row 4
    ans = 1 * (4 - 1) = (3)/1 = 3;
    ans = 3 * (4 - 2) = (6)/2 = 3;
    ans = 3 * (4 - 3) = (3)/3 = 1;
    Row 5
    ans = 1 * (5 - 1) = (4)/1 = 4;
    ans = 4 * (5 - 2) = (12)/2 = 6;
    ans = 6 * (5 - 3) = (12)/3 = 4;
    ans = 4 * (5 - 4) = (4)/4 = 1;

    Hence the Pascal's triangle for numRows = 5;

                            1
                        1       1
                    1       2       1
                1       3       3       1
            1       4       6       4       1

    */
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
              ans.push_back(generateRow(i));
        }
        return ans;
    }
};
