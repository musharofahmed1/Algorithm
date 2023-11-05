#include<bits/stdc++.h>
using namespace std;
void mergeSort(int arr[],int left, int right)
{
    if(left>=right){
        return;
    }
    int mid = left + (right - left) / 2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
void merge(int arr[], int left, int mid, int right) {
    int i;
    int index_a, index_l, index_r;
    int size_left, size_right;

    size_left = mid - left + 1;
    size_right = right - mid;

    int L[size_left], R[size_right];

    for (i = 0; i < size_left; i++) {
        L[i] = arr[left + i];
    }

    for (i = 0; i < size_right; i++) {
        R[i] = arr[mid + 1 + i];
    }

    index_l = 0;
    index_r = 0;

    for (index_a = left; index_l < size_left && index_r < size_right; index_a++) {
        if (L[index_l] <= R[index_r]) {
            arr[index_a] = L[index_l];
            index_l += 1;
        } else {
            arr[index_a] = R[index_r];
            index_r += 1;
        }
    }

    while (index_l < size_left) {
        arr[index_a] = L[index_l];
        index_l += 1;
        index_a += 1;
    }

    while (index_r < size_right) {
        arr[index_a] = R[index_r];
        index_r += 1;
        index_a += 1;
    }
}

int main(){
    int i, n =8;
    int arr[] = {1,5,6,3,5,8,7,2,9};
    mergeSort(arr,0,n);

    for(i=0;i<n;i++){
        cout<< arr[i]<<endl;
    }
}

