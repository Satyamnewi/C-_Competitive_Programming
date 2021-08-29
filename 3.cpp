//Chef - FLOW007
#include <bits/stdc++.h>
using namespace std;
int rev(int n)
{
    int dig,r=0;
    for(int div=n;div>0;div/=10)
    {
        dig=div%10;
        r=r*10+dig;
    }
    return r;
}
int main()
{
	int t,a,r=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        r=rev(a);
        cout<<r<<endl;
    }
    return 0;
}