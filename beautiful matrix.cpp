#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int r,c,p,q,res;
    int array[5][5];
     for(r=0; r<5; r++)
    {
        for(c=0; c<5; c++)
        {
            cin>>array[r][c];
            if(array[r][c]==1)
            {
                p=r;
                q=c;
            }
        }
    }
    res=abs(p-2)+abs(q-2);
    cout<<res;
    return 0;
}
