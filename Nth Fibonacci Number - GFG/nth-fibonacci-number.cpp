//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
 class Solution {
    int mod=1000000007;
    int fib(int N,vector<int> &dp){
        if(N<=1 ){
            return N; 
        }
       
        
        if(dp[N]!=-1)
        {
            return dp[N];
        }
        
        return dp[N]=(fib(N-1,dp) + fib(N-2,dp))%mod;
        }
    
  public:
    long long int nthFibonacci(long long int n){
        vector<int> dp(n+1,-1);
         return fib(n,dp)%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends