#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x;
    cin >> n;
    set<int>s;
    set<int>::iterator it=s.begin();

    for( i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",s.at(i));
    }
    return 0;
}
