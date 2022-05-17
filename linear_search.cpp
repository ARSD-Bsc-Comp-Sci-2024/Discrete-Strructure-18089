#include <iostream>
using namespace std;
int search(int arr[],int n,int x){
    int i;
    for(i=0;i<n-1;i++)
        if(arr[i]==x)
            return i;
        return -1;

}
int main()
{
    int arr[]={2,3,4,10,40};
    int x=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    search(arr,n,x);
    int result=search(arr,n,x);
    if (result==-1)
        cout<<"Element not found";
    else
        cout<<"Element is found at index "<<result;
    return 0;
}
