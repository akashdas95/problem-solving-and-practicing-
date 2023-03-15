#include<bits/stdc++.h>
using namespace std;

string removeX(string s)
{
    int l = s.length();
    if(l==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeX(s.substr(1));
    if(ch =='x')
    {
        return (ans+ch);
    }
    return (ch+ans);

}
int main()
{
    string s;
    cin>>s;
    cout<<removeX(s);
    return 0;
}
