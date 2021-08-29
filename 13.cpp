//Hackerearth - Micro and Array Update
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int m=a[0];
        for(int i=1;i<n;i++)
            m=min(a[i],m);
        if(k-m>=0)
            cout<<k-m<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}