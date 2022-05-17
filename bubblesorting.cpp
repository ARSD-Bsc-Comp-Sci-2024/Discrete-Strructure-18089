#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    int i,j;

    for (i=n-1;i>0;i--){

        for(j=i;j>=0;j--){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }
        }

    }
}

// function to print an array
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    cout<<" "<<arr[i];
}
int main()
{
    int arr[]={6,5,9,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    cout<<"sorted array is : ";
    printArray(arr,n);
    return 0;
} 