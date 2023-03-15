#include<stdio.h>
int main()
{
    int x = 0;
    while(x<100){
        x++;
        if(x%2!=0){
            continue;
        }
        printf("%d\n",x);
    }
    return 0;
}
