#include<stdio.h>
int main()
{
    int i,n,x,ans=0;
    char str[100005];
    scanf("%d",&n);
    scanf("%s",str);

    for(i=0; i<n; i++)
    {
        if(str[i]=='A')
        {
            ans++;
        }

    }
    x=n-ans;
    if(x==ans)
    {
        printf("Friendship");
    }
    else if(x>ans)
    {
        printf("Danik");
    }
    else
    {
        printf("Anton");
    }
    return 0;
}

