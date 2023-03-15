#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n)
{
    int i,temp,j;
    for(i=1; i<n; i++){
        temp = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}


void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    cout<<"sorted array:";
    printArray(arr,n);
    return 0;
}
