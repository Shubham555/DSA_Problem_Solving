//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int BinarySearch(int n){
        int s =0;
        int e =n;
        long long int mid = s+(e-s)/2;
        long long int ans = -1;

        while(s<=e){
          long long int square = mid*mid;
          if(square == n){
              return mid;
          }
          if(square < n){
             ans = mid;
             s = mid+1;
          }
          else{
              e = mid-1;
          }
           mid = s+(e-s)/2; 
        }

        return ans;
    }
     
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
         return BinarySearch(x);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends