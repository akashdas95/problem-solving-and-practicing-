#include <iostream>
using namespace std;
int main()
{
    string str[1050];
    cin >> str;
    if ((str[0]) >= 'a' && (str[0] <= 'z'))
    {
        str[0] = str[0] - 32;
    }
    //no need of else
    /*else
    {
        str[0]=str[0];
    }*/
    cout << str;
    return 0;
}
