#include <stdio.h>

int main()
{
    int i;
    char arr[5];
    arr[3] = 'S';
    for(i=0;i<=3;i++)
    {
        scanf("%c",&arr[i]);
    }
    int cnt=0;
    int max=0;
    for(i=0;i<=3;i++)
    {
        if(arr[i]=='R')
        {
            cnt++;
        }
        else
        {
            if(max<cnt)
            {
                max=cnt;
            }
            cnt=0;
        }
    }
    printf("%d\n",max);
    return 0;
}

