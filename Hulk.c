#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("I hate");
    for(i=2; i<=n; i++)
    {
        if(i%2==0)
        {
          printf(" that I love");
        }
        else
        {
          printf(" that I hate");
        }

    }
    printf(" it");
    return 0;
}

