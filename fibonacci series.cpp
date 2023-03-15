#include<bits/stdc++.h>;
using namespace std;
const int N=1e5+2;
int dp[N];

/*int fibo(int n)
{
   if(n==2 || n==1 || n==0)
   {
       return n;
   }
   if(dp[n]!= -1)
   {
       return dp[n];
   }
   dp[n] = fibo(n-1) + fibo(n-2);

   return dp[n];
}*/


int fib(int n)
{
    for(int i=3; i<=n; i++)
    {
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}

main()
{
    int n;
    cin>>n;
    /*for(int i=0; i<=n; i++)
    {
        dp[i]= -1;
    }*/
    //cout<<fibo(n);

    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    fib(n);
    return 0;
}
