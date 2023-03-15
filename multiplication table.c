56#include<stdio.h>
int main()
{
    int c,m=0;
    printf("enter the value of multiplicand:");
    scanf("%d",&c);
    while(m<=10){
        printf("%d * %d = %d\n",c,m,c*m);
        m++;
    }
    return 0;
}
