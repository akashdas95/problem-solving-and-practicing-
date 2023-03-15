#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int c)
{
    int i,j,mn_i;
    for(i=0; i<c-1; i++){
        mn_i = i;
        for(j=i+1; j<c; j++){
            if(arr[j] < arr[mn_i]){
                mn_i = j;
            }
        }
        swap(arr[i],arr[mn_i]);
        }
}

void printArray(int arr[], int c)
{
    for(int i=0;i<c; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int c,i;
    cin>>c;
    int arr[c];
    for(i=0;i<c;i++){
        cin>>arr[i];
    }
    selectionSort(arr, c);
    cout<< "sorted array: ";
    printArray(arr,c);
    return 0;
}
