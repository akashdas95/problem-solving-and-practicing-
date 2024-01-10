#include "bits/stdc++.h" //problem
using namespace std;


 bool validPalindrome(string s, int l, int r){
    if(l>r){
      return true;
    }
    /*if(!isalnum(s[l])){
      return validPalindrome(s, l++, r);
    }
    if(!isalnum(s[r])){
      return validPalindrome(s, l, r--);
    }*/
    if((s[l])!= (s[r])){
      return false;
    }
    return validPalindrome(s, l++, r--);
}

bool isPalindrome(string s) {
   int l=0, r=s.size()-1;
   return validPalindrome(s, l, r);
}


main(){
    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++){
        cin>>s[n];
    }
    if(isPalindrome(s)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}




