//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        // code here
        if(N==0 || N==1){
            return 0;
        }
        
        int isprime =1;
        for(int i=2;i<N/2;i++){
            if(N%i==0){
                isprime = 0;
                 break;
            }
           
        }
        return isprime;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends