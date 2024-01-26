// class Solution {
// public:
//     int countKDifference(vector<int>& nums, int k) {
//         int n = nums.size();
//         int cnt = 0;
//         for(int i = 0; i<n-1;i++){
//             for(int j = i+1; j<n; j++){
//                  if( abs(nums[i] - nums[j]) == k ){
//                     cnt++;
//                  }
//             }
//         }
//         return cnt;
//     }
// };

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
       map<int,int> mp;
    //    for(int i=0;i<nums.size();i++)
    //    {
    //        mp[i]=nums[i];
    //    }

       int cnt=0;
       for(int i=0;i<nums.size();i++)
       {
           
           cnt+= mp[nums[i]-k]+mp[nums[i]+k];
           mp[nums[i]]++;
       }
       return cnt;
    } 
};  
// x-y=k
// x=y+k
// x-k=y
// 1
// 1 2 2 1
// 1=1+1
// 2=2 1 1

