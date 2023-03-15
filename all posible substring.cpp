#include<bits/stdc++.h>//AC
using namespace std;


void substring(string s, string ans)
{
    int l=s.length();
    if(l==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros=s.substr(1);

    substring(ros,ans);
    substring(ros,ans+ch);
}

int main()
{
    string s;
    cin>>s;
    substring(s,"");
    return 0;
}
