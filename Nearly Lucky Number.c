#include<stdio.h>
int main()
{
    int i,n,k,l,tc,cnt=0;
    char str[1000];
    scanf("%s",str);
    l=strlen(str);
    for(i=0; i<l; i++)
    {
        if(str[i]=='4'||str[i]=='7')
        {
            cnt++;
        }
    }
    if(cnt==4||cnt==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
