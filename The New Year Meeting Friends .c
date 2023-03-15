
#include<stdio.h>
int main()
{
    int i,n,a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        temp=b;
        b=a;
        a=temp;
    }
    if(a>c)
    {
        temp=c;
        c=a;
        a=temp;
    }
    if(b>c)
    {
        temp=c;
        c=b;
        b=temp;
    }
    printf("%d",(b-a)+(c-b));
    return 0;
}
