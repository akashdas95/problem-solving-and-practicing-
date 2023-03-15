#include "bits/stdc++.h" //not finished
using namespace std;

main()
{
    int n,k;
    cin>>n>>k;
    char str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int countsubstr[26];

    int window_start=0;
    int maxlength=0;
    int maxcount=0;

    for(int window_end =0; window_end<n; window_end++)
    {
        countsubstr[str[window_end]-'a']++;
        int currentcount= countsubstr[str[window_end]-'a'];
        maxcount=max(maxcount,currentcount);

        while(window_end - window_start - maxcount+1 >k)
        {
            countsubstr[str[window_start]-'a']--;
            window_start++;
        }
        maxlength=max(maxlength, window_end - window_start+1);
    }
    cout<<maxlength;
    return 0;
}
