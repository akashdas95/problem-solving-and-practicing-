#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int reverss=0;
    while(n>0)
    {
        int lastdigit=n%10;
        /*if(lastdigit==0)
        {
            cout<<"0";
        }*/
        reverss=reverss*10 +lastdigit;
        n=n/10;
    }
    cout<<reverss;

    return 0;
}
