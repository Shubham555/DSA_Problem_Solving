//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        //  int arr2[n];
        //  for(int i=0;i<n;i++){
        //      arr2[i]=arr[i];
        //  }
        //  sort(arr,arr+n);
        //  bool ans = false;
        //  for(int i=0;i<n;i++){
      
        //      if(arr[i]=arr2[i]){
        //          ans = true;
        //      }
        //      else{
        //          ans = false;
        //          break;
        //      }
        //  }
        //  return ans; 
           for(int i=0;i<n-1;i++)

            if(arr[i]>arr[i+1])

                return false;

            return true;


        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends