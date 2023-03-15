#include<bits/stdc++.h>//AC
using namespace std;

string removedup(string s)
{
    int l = s.length();
    if(l==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removedup(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    else
    {
        return (ch+ans);
    }
}


int main()
{
    string s;
    cin>>s;
    cout<<removedup(s);
    return 0;
}
