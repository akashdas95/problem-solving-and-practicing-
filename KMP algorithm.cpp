#include<bits/stdc++.h>
using namespace std;

void computeLPSArray(char*pat,int M,int*lps);

void KMP(char*pat, char*txt)
{
    int M = strlen(pat);
    int N = strlen(txt);

    int lps[M];

    computeLPSArray(pat,M,lps);

    int i = 0; // index for txt[]
    int j = 0; // index for pat[]
    while(i<N){
        if(txt[i]==pat[j]){
            i++;
            j++;
        }

        else{
            if(j!=0){
               j= lps[j-1];
            }
            else{
                i++;
            }
        }
         if(j == M){
            cout<< "match found at:" <<(i-j)+1<<" ";
            /*j= lps[j-1];*/
        }
    }
}

void computeLPSArray(char*pat,int M,int*lps)
{
    int len = 0;
    int i = 1;
    lps[0] = 0;
    while(i<M){
        if(pat[i] == pat[len]){
            lps[i]=len+1;
            i++;
            len++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}

int main()
{
    char txt[] = "onionionsonionions";
    char pat[] = "onio";
    KMP(pat, txt);
    return 0;
}
