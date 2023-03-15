#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i,d;
    scanf("%s",str1);
    for(i=0; i<strlen(str1); i++)
    {
        if(str1[i]>=65&&str1[i]<=90)
        {
            str1[i]=str1[i]+32;
        }
    }
    scanf("%s",str2);
    for(i=0; i<strlen(str2); i++)
    {
        if(str2[i]>=65&&str2[i]<=90)
        {
            str2[i]=str2[i]+32;
        }
    }
    d=strcmp(str1,str2);
    printf("%d",d);
    return 0;
}
