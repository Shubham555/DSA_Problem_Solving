class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int leftSum = 0;
        int RightSum =0;
        int totalSum =0;
        for(int i:nums){
            totalSum = totalSum + i;
        }
        for(int i=0;i<nums.size();i++){
            RightSum = totalSum - nums[i] - leftSum;
            if(RightSum == leftSum ){
                return i;
            }
            else{
             leftSum += nums[i];   
            }
        }
        return -1;

    }
};
