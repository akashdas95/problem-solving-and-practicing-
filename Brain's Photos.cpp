#include<bits\stdc++.h>
using namespace std;
int main()
{
    int i,j,t,a,b;
    char str;
    cin>>a>>b;
    for(i=0; i<a*b; i++)
    {
        cin>>str;
        if(str =='C'|| str =='M' || str=='Y')
        {
            cout<<"#Color\n";
            return 0;
        }
    }
    cout<<"#Black&White\n";
    return 0;
}

