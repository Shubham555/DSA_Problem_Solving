class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map <int ,int> m;
        for(int i = 0; i<nums.size();  i++)
         m[nums[i]] ++; // frequency of every number is stored;
         for( auto it : m)
            if(it.second%2) //number ki feq. check ki jayegi odd hai ya even if odd then return false else true.
               return false;
        return true;       
    }
};
