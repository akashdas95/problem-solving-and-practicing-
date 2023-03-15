#include<stdio.h>
int main()
{
    char str[1050];
    scanf("%s",str);
    if((str[0])>='a'&& (str[0]<='z'))
    {
        str[0]=str[0]-32;
    }
    else
    {
        str[0]=str[0];
    }
    printf("%s",str);
    return 0;
}
