#include "bits/stdc++.h"
using namespace std;

main()
{
    int decimalNum,n=32;
    cin>>decimalNum;
    int remainderArr[n];
    int remainder;
    int i=0;
    while(decimalNum!=0)
    {
        remainder=decimalNum%2;
        remainderArr[i]=remainder;
        decimalNum=decimalNum/2;
        i++;
    }
    int counter=0;
    for(int i=n-1; i>=0;i--)
    {
        if(counter==4)
        {
            cout<<" ";
            counter=0;
        }
        if(remainderArr[i]!=0 && remainderArr[i]!=1)
        {
            cout<<"0";
        }
        else
        {
            cout<<remainderArr[i];
        }
        counter++;

    }

    return 0;
}
