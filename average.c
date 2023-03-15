#include<stdio.h>
int main()
{
    int n,i;
    float avg,sum=0;
    scanf("%d",&n);
    int myarray[n];
    for (i=0; i<n; i++)
    {
        printf("enter the value:");
        scanf("%d",&myarray[n]);
        sum=sum+myarray[n];
    }
    avg=sum/n;
    printf("average is %f",avg);
    return 0;
}


