#include<stdio.h>
int main()
{
    int i,t,o,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a*b%2==1)
        {
            printf("%d\n",(a*b/2)+1);
        }
        else
        {
            printf("%d\n",a*b/2);
        }

    }
    return 0;
}
