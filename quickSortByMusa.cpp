#include <bits/stdc++.h> 
using namespace std;
//create partition function
int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int start = low;
    int end = high;

    while(start < end){
        while(arr[start] <= pivot){
            start++;
        }
        while(arr[end] > pivot){
            end--;
        }
        if(start < end){
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[low],arr[end]);
    return end;
}
void quickSort(int arr[], int low, int high){
    if(low<high){
        int loc = partition(arr,low,high);
        quickSort(arr,low,loc-1);
        quickSort(arr,loc+1,high);

    }
}
int main()
{
int arr[]={10,7,8,9,1,5};
int n=sizeof(arr)/sizeof(arr[0]);
// Function call
quickSort(arr,0,n-1);
//Print the sorted array
cout<<"Sorted Array\n";
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
return 0;
}
