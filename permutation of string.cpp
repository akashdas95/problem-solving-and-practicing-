#include<bits/stdc++.h>//AC
using namespace std;

void permutation(string s, string ans)
{
    int l= s.length();
    if(l==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i =0; i<l; i++)
    {
        char ch= s[i];
        string pos = s.substr(0,i)+s.substr(i+1);
        permutation(pos,ans+ch);
    }
}



int main()
{
    string s;
    cin>>s;
    permutation(s,"");
    return 0;
}
