#include<stdio.h>
int main()
{
    int t,i,ans=0;
    char str[100];
    scanf("%d",&t);
    scanf("%s",str);
    for(i=0; i<t; i++)
    {
        if(str[i]==str[i+1])
        {
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}
