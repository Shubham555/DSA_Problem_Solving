#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size, int key){
    int start = 0;
    int end =size-1;
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

int main(){
    
    int arr[6] ={2,4,6,8,12,18};

    int indexofNumber = BinarySearch(arr,6,18);                                                                                                                                                                     
    cout<<"index of Number is "<<indexofNumber<<endl;

    return 0;
}