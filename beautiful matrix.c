#include<stdio.h>
#include<stdlib.h>
//unsuccessful yet
int main()
{
    int r,c,p,q,res;
    int array[5][5];

    for(r=0; r<5; r++)
    {
        for(c=0; c<5; c++)
        {
            scanf("%d ",array[r][c]);
            if(array[r][c]==1)
            {
                p=r;
                q=c;
            }
        }
    }
    res=abs(p-2)+abs(q-2);
    printf("%d",res);
    return 0;
}
