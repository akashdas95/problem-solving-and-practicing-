#include<stdio.h>
int main()
{
    int i,j,t,a,b;
    char str[105];
    scanf("%d %d",&a,&b);
    for(i=0; i<a*b; i++)
    {
        scanf("%c",str);
        if(str=='W'||str=='B')
        {
            printf("#Black&White");
        }
        else
        {
            printf("#Color");
        }
    }
    return 0;
}
