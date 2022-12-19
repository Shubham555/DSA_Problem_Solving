class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort( nums.begin(),nums.end(),greater<int>() );
        int n = nums.size()-1;
        int ans =0;
        ans = ( nums[0]*nums[1] ) - ( nums[n]*nums[n-1] );
        return ans;
    }
};
