class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            nums[i] = nums[i]+nums[i-1];
            ans.push_back(nums[i]);
        } 
        return ans;
    }
};


/*
class Solution {
public:
	// you can remove the '&' in case you don't want to update the nums array
    vector<int> runningSum(vector<int>& nums) { 
        for(int i=1;i<nums.size();i++) nums[i]+=nums[i-1]; //prefix sum calculation
        return nums;
    }
};*/