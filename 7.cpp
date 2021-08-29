//https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
    getline (cin, s1);
    getline (cin, s2);
    cout<<s1.size();
    
    cout<<" ";
    cout<<s2.size()<<endl;
    cout<<s1+""+s2<<endl;

    char t=' ';
    t=s1[0];
    s1[0]=s2[0];
    s2[0]=t;

    cout<<s1+" "+s2;

    return 0;
}