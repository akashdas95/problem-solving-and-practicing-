#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int orginaln=n;
    int sum=0;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(sum==orginaln)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"not armstrong number";
    }
    return 0;
}
