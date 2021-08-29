//CodeChef - FLOW006
#include <bits/stdc++.h>
using namespace std;
int sum_of_digit(int n)
{
    int dig,sum=0;
    for(int div=n;div>0;div/=10)
    {
        dig=div%10;
        sum+=dig;
    }
    return sum;
}
int main()
{
	int t,a,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        sum=sum_of_digit(a);
        cout<<sum<<endl;
    }
    return 0;
}