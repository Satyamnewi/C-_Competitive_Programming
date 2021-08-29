///Codechef - STONES
#include <bits/stdc++.h>
using namespace std;
int check(string s1,string s2)
{
    int f=0;
    for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                if(s1[i]==s2[j])
                {
                    ++f;
                    break;
                }
            }
        }
    return f;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        int f=0;
        cin>>s1;
        cin>>s2;
        if(s2.size()>s1.size())
            f=check(s1,s2);
        else
            f=check(s2,s1);
        cout<<f<<endl;
    }
    return 0;
}