#include<iostream>
#include "selectionsort.h"
#include "bubblesort.h"

using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of arr: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the arr: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bubblesort(arr,n);
    //selectionsort(arr,n);
    
    cout<<"Sorted arr: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}