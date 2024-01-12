class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi_Sum = 0;
        
        for(int i=0;i<nums.size()-1;i = i+2){
           maxi_Sum += nums[i]; 
        }
        return maxi_Sum;
    }
};
