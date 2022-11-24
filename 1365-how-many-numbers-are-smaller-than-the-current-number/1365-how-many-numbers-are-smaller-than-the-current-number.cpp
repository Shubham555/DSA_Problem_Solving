class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        // sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
           int k=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i] > nums[j] && i != j)
                {
                     k++;
                }
            }
            ans.push_back(k);
        }
        return ans;
    }
};
 

















/*
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        int bucket[102] = {0};
        for(auto i:nums){
            bucket[i+1]++;
        }
        for(int i=1;i<102;i++){
            bucket[i] += bucket[i-1];
        }
        for(int i=0;i<n;i++){
            nums[i] = bucket[nums[i]];
        }
        return nums;
    }*/