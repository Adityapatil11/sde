#include<iostream>
#include "selectionsort.h"
#include "bubblesort.h"

using namespace std;
int main()
{
    int n =10;
    // cout<<"Enter the size of arr: ";
    // cin>>n;
    int arr[10] = {45,7,1,9,2,3,6,8,4,5};
    // cout<<"Enter the arr: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    
    bubblesort_optimized(arr,n);
    // bubblesort(arr,n);
    //selectionsort(arr,n);
    
    cout<<"Sorted arr: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}