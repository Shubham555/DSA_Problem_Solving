class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort( nums.begin(),nums.end(),greater<int>() ) ;
        int max_product = 0;
        max_product = (nums[0]-1) * (nums[1]-1);
        return max_product;
    }
};
