#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0,currlen=0,maxlen=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            maxlen=max(maxlen,currlen);
            currlen=0;
        }
        else
        {
          currlen++;
        }
        if(arr[i]=='\0')
            break;

        i++;
    }
    cout<<maxlen;
    return 0;
}
