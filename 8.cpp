//Pallindrome check
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,rev="";
    getline (cin, str);
    for(int i=0;i<str.size();i++)
    rev=str[i]+rev;
    if(rev==str)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}