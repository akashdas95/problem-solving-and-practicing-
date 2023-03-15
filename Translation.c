#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,l, t;
    char str[105],ans[105],str1[105],temp;
    scanf("%s %s",str,str1);
    l=strlen(str);
    t=strlen(str1);
    if(l != t)
    {
        printf("NO\n");
    }
    else
    {
        /*for(i = 0; i < l; i++)
        {
            printf("%c %c\n", str[i], str1[l - i - 1]);
        }*/

        for(i = 0; i < l; i++)
        {
            if(str[i] != str1[l - i - 1])
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }
    return 0;
}

