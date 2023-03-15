#include<stdio.h>

int main()
{
    int n, i, ans = 0;
    char str[5];
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%s", str);

        if((strcmp(str, "X++") == 0) || (strcmp(str, "++X") == 0))
        {
            //printf("YES\n");
            ans++;
        }
        else
        {
            //printf("NO\n");
            ans--;
        }
    }
    printf("%d\n", ans);
    return 0;
}
