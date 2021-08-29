//Geeks - Remove characters from first string which are in second string
//https://practice.geeksforgeeks.org/problems/remove-character3815/1
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,res="";
    int f=0;
    getline (cin, s1);
    getline (cin, s2);
    for(int i=0;i<s1.size();i++)
    {
        f=0;
        for(int j=0;j<s2.size();j++)
        {
            if(s1[i]==s2[j])
            f++;
        }
        if(f==0)
        res=res+s1[i];
    }
    cout<<res;
    return 0;
}