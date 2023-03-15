#include<bits/stdc++.h>
using namespace std;

void isPrime(int n) {

  bool flag = false;
  for (long long i = 2; i*i <= n; i++) {
    if (n % i == 0){
      flag=true;
    }
  }
  if (n < 2){
    cout<<"not prime";
  }
  else if(flag==true){
    cout<<"not prime";
  }
  else{
    cout<<"prime";
  }
}

int main()
{
    int n;
    cin>>n;
    isPrime(n);
    return 0;
}
