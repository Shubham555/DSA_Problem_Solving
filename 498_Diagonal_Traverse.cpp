class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
       if(matrix.size()==0) 
            return vector<int>();
       int m = matrix.size(),  n = matrix[0].size(), r =0, c=0;
       vector<int> result(m*n);

       for(int i=0;i<result.size();i++){
           result[i] = matrix[r][c];
           if((r+c)%2==0){
               if(c == n-1){
                   r++;
               }else if(r==0){
                   c++;
               }else{
                   r--;
                   c++;
               }
           }else{
               if(r==m-1){
                   c++;
               }else if(c==0){
                   r++;
               }else{
                   r++;
                   c--;
               }
           }
       }
        return result;
    }
};
