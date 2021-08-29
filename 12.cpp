//Leetcode - 551. Student Attendance Record
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
    int f=0,c=0;
    getline (cin, s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        c++;
        if(i+2<s.size()&&s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L')
        f=1;
    }
    if(c<2&&f!=1)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}