class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater());
        int n = cost.size();
        int Min_cost = 0;
        for(int i=0; i<n; i++){
            if( (i+1)%3 == 0){
                continue;
            }
            else{
               Min_cost = Min_cost + cost[i];
            }
        }
        return Min_cost;
    }
};
