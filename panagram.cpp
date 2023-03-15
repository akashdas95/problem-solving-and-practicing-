#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    string s;
    cin>>s;
    int cnt=0;
    if (n<26)
    {
        printf("NO");
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            s[i]=towlower(s[i]);
        }
        sort(s.begin(),s.end());
        for(int i=0; i<n; i++)
        {
            if(s[i]!=s[i+1])
            {
                cnt++;
            }
        }
        if(cnt==26)
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
