#include<bits/stdc++.h>//AC
using namespace std;

void replacepie(string s)
{
    int l=s.length();
    if(l==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacepie(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacepie(s.substr(1));
    }
}


int main()
{
    string s;
    cin>>s;
    replacepie(s);
    return 0;
}
