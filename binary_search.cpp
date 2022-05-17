#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1

int binarySearch(int arr[],int l,int r,int x)
{
    if (r>=1){
        int mid=l+(r-1)/2;
        if(arr[mid]==x)     //if the element is present at the mid itself
            return mid;
        if(arr[mid]>x)      //if the element is smaller than mid, then it can only be present in mid subarray
            return binarySearch(arr,l,mid-1,x);
        return binarySearch(arr,mid+1,r,x);

    }
    return -1;          //when element is not present in array
}
int main(){
    int arr[]={2,3,4,20,30,40,29};
    int x=30;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=binarySearch(arr,0,n-1,x);
    (result==-1)?cout<<"Element is not present in array..":cout<<"Element is present at index "<<result;
    return 0;
} 