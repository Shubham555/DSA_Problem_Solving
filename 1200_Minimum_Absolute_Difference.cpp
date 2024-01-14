class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        for(int i=1; i<n; i++){
            mini=min(mini,arr[i]-arr[i-1]);
         }
        // 1 2 3 4
        for(int i=1; i<n; i++){
            vector<int> vec;
            if(arr[i] - arr[i-1] == mini){
                vec.push_back(arr[i-1]);
                vec.push_back(arr[i]);
                res.push_back(vec);
            }  
        }
        return res;
    }
};
