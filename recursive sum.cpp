#include<bits/stdc++.h>//AC
using namespace std;

/*int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}*/

/*void aesc(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return ;
    }
    aesc(n-1);
    cout<<n<<endl;

}

int desc(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return n;
    }
    cout<<n<<endl;
    desc(n-1);
}*/


/*bool sorted(int arr[], int n)
{
    if(n==1){
        return true;
    }

    bool restarray = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restarray);
}*/

int firstocc(int arr[], int n, int i, int k)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==k)
    {
        return i;
    }
    return firstocc(arr,n,i+1,k);

}

int lastocc(int arr[], int n, int i,int k)
{
    if(i==n)
    {
        return -1;
    }
    int restarray = lastocc(arr,n,i+1,k);
    if(restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]==k)
    {
        return i;
    }
    return -1;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    /*int ans = fib(n);
    cout<<ans;
    aesc(n);
    desc(n);*/
    //cout<<sorted(arr, n);
    int i=0;
    cout<<firstocc(arr,n,i,k)<<" ";
    cout<<lastocc(arr,n,i,k);
    return 0;
}
