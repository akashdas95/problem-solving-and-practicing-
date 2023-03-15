#include<stdio.h>
int main()
{
    int w,possibility;
    scanf("%d",&w);
    if(w==2)
    {
        printf("NO");
    }
    else
    {
        possibility=w%2;
        if(possibility==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}
