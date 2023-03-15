#include<stdio.h>
int main()
{
    int i,n,a,b,c,mis=0,chr=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            mis++;
        }
        else if(b>a)
        {
            chr++;
        }
    }
    if(mis>chr)
    {
        printf("Mishka");
    }
    else if(chr>mis)
    {
        printf("Chris");
    }
    else
    {
        printf("Friendship is magic!^^");
    }
    return 0;
}

