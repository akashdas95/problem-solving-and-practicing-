#include <stdio.h>
int main()
{
    int a, b, i, i2, t, sum, k = 1;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d\n %d", &a, &b);
        sum = 0;
        for (i2 = a; i2 <= b; i2++)
        {
            if (i2 % 2 == 1)
            {
                sum = sum + i2;
            }
        }

        printf("Case %d: %d\n", k, sum);
        k++;
    }
    return 0;
}
