#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    //vector<int>v;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int index =abs(arr[i])-1;
        if (arr[index]<0){
            cout<<index+1<<" ";  //or v.push_back(abs(arr[i])); //or v.push_back(index+1);
        }
        arr[index]= -arr[index];
    }
    //for(int i=0;i<v.size();i++){
      //  cout<<v[i]<<" ";
    //}
  return 0;
}
