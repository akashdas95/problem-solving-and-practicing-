#include<stdio.h>
main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int myarray[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&myarray[n]);
        sum=sum+myarray[n];
    }
    printf("%d",sum);
    return 0;
}
