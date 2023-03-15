#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,x,ans=0;
    char str[105];
    scanf("%s",str);
    l=strlen(str);
    for(i=0; i<l; i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            ans++;
        }
    }
    if(ans>l/2)
    {
        for(i=0; i<l; i++)
        {
            if(str[i]>=97&&str[i]<=122)
            {
                str[i]=str[i]-32;
            }
        }
    }
    else
    {
        for(i=0; i<l; i++)
        {
            if(str[i]>=65&&str[i]<=90)
            {
                str[i]=str[i]+32;
            }
        }

    }
    printf("%s",str);
    return 0;
}

