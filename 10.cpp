//Leetcode - 1678. Goal Parser Interpretation
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,res="";
    getline (cin, s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='G')
        res=res+'G';
        else if((s[i]=='(')&&(i!=s.size()-1)&&(s[i+1]==')'))
        {
            res=res+'o';
            i=i+1;
        }
        else if((s[i]=='(')&&(i!=s.size()-1)&&(s[i+1]!=')')&&(s[i+1]=='a')&&(i!=s.size()-3)&&(s[i+2]=='l'))
        {
            res=res+"al";
            i=i+3;
        }
    }
    cout<<res;
    return 0;
}