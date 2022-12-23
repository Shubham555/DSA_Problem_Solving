//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
        int leftSum = 0;
        int RightSum =0;
        int totalSum =0;
        for(int i=0;i<n;i++){
            totalSum = totalSum + A[i];
        }
        for(int i=0;i<n;i++){
            RightSum = totalSum - A[i] - leftSum;
            if(RightSum == leftSum ){
                return i;
            }
            else{
             leftSum += A[i];   
            }
        }
        return -1;
}