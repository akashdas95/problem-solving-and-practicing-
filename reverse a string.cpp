#include<bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    int l=s.length();
    if(l==0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main()
{
    string s;
    cin >>s;
    reverse(s);
    return 0;
}
