// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

int firstoccu(int arr[],int n, int key){
    int start = 0;
    int end =n-1;
    int mid = start + (end-start)/2;    
    int  ans = -1;
    
    while(start<=end){    

        if(key==arr[mid]){
            ans = mid;
            end =mid-1;
        }

        else if(key>arr[mid]){
            start = mid+1;
        }
        else{   
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int lastoccu(int arr[],int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;    
    int  ans = -1;
    while(start<=end){    

        if(key==arr[mid]){
            ans = mid;
            start = mid +1;
        }

        else if(key>arr[mid]){
            start = mid+1;
        }
        else{   
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}
vector<int> find(int arr[], int n , int x )
{
        vector<int> v;
        v.push_back(firstoccu(arr,n,x));
        v.push_back(lastoccu(arr,n,x));
        
        return v;
  
//   upper_bound(arr.begin(),arr.end(),x)-arr.begin()<<endl;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends