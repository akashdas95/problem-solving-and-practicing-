#include<stdio.h>
main()
{
    int num1,num2,value;
    char sign;
    printf("enter a number:");
    scanf ("%d",&num1);
    printf ("enter another number:");
    scanf ("%d",&num2);
    value=num1+num2;
    sign='+';
    printf ("%d%c%d=%d\n",num1,sign,num2,value);
    value=num2-num1;
    sign='-';
    printf ("%d%c%d=%d\n",num2,sign,num1,value);
    value=num2*num1;
    sign='*';
    printf ("%d%c%d=%d\n",num2,sign,num1,value);
    value=num2/num1;
    sign='/';
    printf ("%d%c%d=%d\n",num2,sign,num1,value);
}
