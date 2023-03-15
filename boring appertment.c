#include <stdio.h>
int main()
{
    int i,j,n,tc;
    char str[5];
    scanf("%d",&tc);
    for(i=0; i<tc; i++)
    {
         scanf("%s",str);
         int l=strlen(str);
         n=str[0]-'0';
         //printf("%d",n);
         if(l==4)
         {
             printf("%d\n",(n*10));
         }
         else if(l==3)
         {
             printf("%d\n",(n*10)-4);
         }
         else if(l==2)
         {
             printf("%d\n",(n*10)-7);
         }
         else
         {
             printf("%d\n",(n*10)-9);
         }
    }
    return 0;
}
