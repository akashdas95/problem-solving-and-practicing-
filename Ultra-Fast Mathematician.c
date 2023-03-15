#include<stdio.h>
int main()
{
    int i,l,j=0;
    char str[105],str1[105];
    scanf("%s %s",str,str1);
    l=strlen(str);
    for(i=0; i<l; i++)
    {
        if(strcmp(str[i],str1[i])==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}


