class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
       int n = heights.size();
       vector<int> heights2(n);
       for(int i=0;i<n;i++){
              heights2[i] = heights[i];
        //    heights2.push_back(heights[i]);
       }
       sort(heights.begin(),heights.end());
       vector<int> expected(n);
       for(int i=0;i<n;i++){
          expected[i]= heights[i];
       }
       int n_of_indices =0;
        for(int i=0;i<n;i++){
          if(heights2[i] != expected[i]){
              n_of_indices++;
          }
       }
       return n_of_indices; 
    }
};
