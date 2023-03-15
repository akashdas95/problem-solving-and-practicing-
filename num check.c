#include<stdio.h>
int main()
{
    int x,min,max;
    printf("enter a minimum value:");
    scanf("%d",&min);
    printf("enter a maximum value:");
    scanf("%d",&max);
    if(max<min){
        printf("invalid input");
    }
    else{
        printf("enter a value:");
        scanf("%d",&x);
        if(x>=min && x<=max){
            printf("you are in the range");}
        else{
            printf("you are out of range");
            }
        }

    return 0;
}
