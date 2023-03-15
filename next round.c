#include<stdio.h>
int main()
{
    int n, k, i;
    scanf("%d %d", &n, &k);
    int ar[n], cnt =0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] > 0)
        {
            if(i < k)
                cnt++;
            else if(i >= k && ar[i] == ar[k-1])
                cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}



