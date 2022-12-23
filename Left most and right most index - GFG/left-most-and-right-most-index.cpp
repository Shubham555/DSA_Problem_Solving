// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    
    
    int firstoccu(vector<long long>& arr, long long key){
    int start = 0;
    int end =arr.size()-1;
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

int lastoccu(vector<long long>& arr, long long key){
    int start = 0;
    int end = arr.size()-1;
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
    
    
    
    
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {  
        pair <long,long> p;
        p = make_pair(firstoccu(v,x), lastoccu(v,x));
        // p.fisrt = firstoccu(v,x);
        // p.second = lastoccu(v,x);
        
        return p; 
         
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
  // } Driver Code Ends