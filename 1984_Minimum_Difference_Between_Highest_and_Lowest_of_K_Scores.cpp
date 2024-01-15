class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = k-1; 
        int n = nums.size();
        int result = INT_MAX;
        while(j<n){
          result = min( result, nums[j]-nums[i] );
          i++;
          j++;
        }
        return result;
    }
};
