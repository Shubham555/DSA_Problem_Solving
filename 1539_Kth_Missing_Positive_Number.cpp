class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size();
        while(low<high){
            int mid = low + (high-low)/2;

            if(arr[mid] - (mid+1) >= k){
                high = mid ;
            }
            else{
                low = mid +1;
            }
        }
        return low + k;
    }
};
