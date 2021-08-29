//Hackerearth - Cost of balloons
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g,p,n,cost=0,c=0,c2=0;
        cin>>g>>p;
        int mi=min(g,p);
        int ma=max(g,p);
        cin.ignore();
        cin>>n;
        int a[n][2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0];
            cin>>a[i][1];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i][0]==1)
            c++;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i][1]==1)
            c2++;
        }
        if(c>c2)
            cost=c2*ma+c*mi;
        else
            cost=c2*mi+c*ma;
        cout<<cost<<endl;
    }
    return 0;
}