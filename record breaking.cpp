#include<bits/stdc++.h>//AC
using namespace std;

int main(){
  int i,mx=-2e9,ans=0;
  int n;
  cin>>n;
  int arr[n+1];
  for(int i=0; i<n;i++)
  {
      cin>>arr[i];
  }
  arr[n]=-1;

  for(int i=0; i<n; i++)
  {
      if(arr[i]>mx && arr[i]>arr[i+1])
      {
          ans++;
      }
      mx=max(mx,arr[i]);
  }
  cout<<ans;
  return 0;
}
