#include<stdio.h>
int main()
{
    int x,remainder;
    printf("enter a value:");
    scanf("%d",&x);
    remainder=x%2;
    if(remainder==0)
    {
        printf("your value is even\n");
    }
    else
    {
        printf("your value is odd\n");
    }
    return 0;
}
