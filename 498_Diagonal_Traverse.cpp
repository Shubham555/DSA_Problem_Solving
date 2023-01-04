class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if (m == 0) return vector<int>();
        int n = matrix[0].size();
        vector<vector<int>> tmp (m+n-1);
        for (int i = 0; i < m+n-1 ; i++) {
            int row = max(0, i-n+1);
            int col = min(i, n-1);
            for (; col >= 0 && row < m; row++, col--) {
                tmp[i].push_back(matrix[row][col]);
            }
        }
        vector<int> res;
        for (int i = 0; i< tmp.size(); i++) {
            if (i % 2) res.insert(res.end(), tmp[i].begin(), tmp[i].end());
            else res.insert(res.end(), tmp[i].rbegin(), tmp[i].rend());
        }
        return res;
    }
};
