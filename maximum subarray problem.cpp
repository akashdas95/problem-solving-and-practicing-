#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int best=0,sum=0;
    for (int i=0;i<n;i++){
        sum=max(arr[i],sum+arr[i]);
        best=max(best,sum);
    }
    cout<<best;
    return 0;
}

//2nd approach

/*#include<bits/stdc++.h>//AC
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int currsum=0,ans=INT_MIN;
    for (int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0)
        {
            currsum=0;
        }
        ans=max(ans,currsum);
    }
    cout<<ans;
    return 0;
}*/
