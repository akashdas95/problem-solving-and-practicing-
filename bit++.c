#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,ans=0;
    char str[5];

    scanf("%d",&n);
    fflush(stdin);

    for(i=0; i<n; i++)
    {
        fflush(stdin);
        scanf("%s", str);
        fflush(stdin);

        if((strcmp(str, "x++")==0||strcasecmp(str,"++x")==0))
        {
            ans++;
        }
        else
        {
            ans--;
        }

    }

    printf("%d",ans);
    return 0;
}
