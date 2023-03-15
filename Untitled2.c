#include<stdio.h>
int main()
{
    int min, max, s, e, i;


    printf("Enter a range: ");
    scanf("%d %d", &min, &max);

    printf("starting value: ");
    scanf("%d", &s);
    printf("Ending value: ");
    scanf("%d", &e);

    if(s >= min && e <= max)
    {
        for(i = s; i <= e; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid Input\n");
    }








    /*printf("enter a minimum value:");
    scanf("%d",&min);
    printf("enter a maximum value:");
    scanf("%d",&max);
    if(max < min)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("enter a starting value:");
        scanf("%d",&x);
        if(x < min)
        {
            printf("Invalid Input\n");
        }
        else
        {
            printf("enter a ending value:");
            scanf("%d",&y);
            if(y > max)
            {
                printf("Invalid Input\n");
            }
            else
            {
                int i = 0;
                for(i = x; i <= y; i++)
                {
                    printf("%d ", i);
                }
                printf("\n");
            }
        }
    }*/

    return 0;
}




