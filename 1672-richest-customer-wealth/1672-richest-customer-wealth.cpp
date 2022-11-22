class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int rows = accounts.size();
       int cols = accounts[0].size(); 
       int MaxSum = INT_MIN;
        
       for(int i=0;i<rows;i++){
           int Sum = 0;
           for(int j=0;j<cols;j++){
               Sum += accounts[i][j];
           } 
           
           MaxSum= max(MaxSum,Sum);
       }
        return MaxSum;
    }
};

// solved but extra space
/*class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int rows = accounts.size();
       int cols = accounts[0].size(); 
       vector<int> ans;
        
       for(int i=0;i<rows;i++){
           int sum = 0;
           for(int j=0;j<cols;j++){
               sum += accounts[i][j];
           }
           ans.push_back(sum);
       }
        return *max_element(ans.begin(),ans.end());
    }
};*/

