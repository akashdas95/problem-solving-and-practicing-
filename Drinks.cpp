#include<iostream>
using namespace std;
int main()
{
    int i,n,x;
    double p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        p+=x;
    }
    cout<<(double)p/n;
    return 0;
}
