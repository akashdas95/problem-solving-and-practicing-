#include <stdio.h>
int main()
{
    int i,n,a,b,c,d,x,y;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d",((a^b)&(c|d))^((b&c)|(d^a)));
    return 0;
}
