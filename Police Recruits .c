#include<stdio.h>
int main()
{
    int i,n,arr[100005],cnt=0,rem=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            if(rem==0)
            {
                cnt++;
            }
            else
            {
                rem--;
            }
        }
        else
        {
            rem+=arr[i];
        }
    }
    printf("%d",cnt);

    return 0;
}
