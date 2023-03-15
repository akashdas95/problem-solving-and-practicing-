#include<stdio.h>
int main()
{
    int i,n,p;
    double x,y,sum=0;
    scanf("%d",&n);
    y=n*100;
    for(i=0; i<n; i++)
    {
        scanf("%d",&p);
        sum=sum+p;
    }
    x=(sum/y)*100;
    printf("%.12lf",x);
    return 0;
}
