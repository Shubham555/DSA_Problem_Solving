class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min = nums[0];
        int max = nums[nums.size()-1];
        return gcd(min,max);
    }
};
