#include<stdio.h>
int main()
{
    int i,n,o,a,b;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("%d",a*(a+1)+b*(b+1));
    }
    else
    {
       printf("%d",a*(a+1)+b*(b+1)-1);
    }

    return 0;
}

