#include<stdio.h>
int main()
{
    int i,n;
    long l;
    char myarray[100];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",myarray);
        l=strlen(myarray);
        if(l<=10)
        {
            printf("%s\n",myarray);
        }
        else
        {
            printf("%c%d%c\n",myarray[0],l-2,myarray[l-1]);
        }
    }
    return 0;
}
