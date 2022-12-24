class Solution {
public:
     int pivot(vector<int>& arr, int n){
         int s = 0;
         int e = n-1;
         int mid = s + (e-s)/2;

         while(s<e){
             if(arr[mid]>=arr[0]){
                 s = mid +1;
             }
             else{
                 e = mid;
             }
             mid = s + (e-s)/2; 
         }
         return s; // or we can return 'e' ; as both are lying on same index(s=e)then onlytheloop exits na 
     }
  
    int BinarySearch(vector<int> &arr,int s,int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;     // ( start + end ) / 2.

    while(start<=end){    // that is start is < = (n-1) ;

        if(key==arr[mid]){
            return mid;
        }

        else if(key>arr[mid]){
            start = mid+1;
        }
        else{   // that is --> key<arr[mid]
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}


    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int PivotIndex = pivot(nums,n);
        if(target >= nums[PivotIndex] && target <= nums[n-1]){
            // B.S on second line
           return BinarySearch(nums, PivotIndex, n-1, target);
        }
        else{
            // B.S on first line
            return BinarySearch(nums, 0, PivotIndex-1, target);
        }
    }
};
