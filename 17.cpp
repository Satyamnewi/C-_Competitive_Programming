//Fibonacci for t test cases with reduced time complexity
#include <bits/stdc++.h>
using namespace std;
const int n=1e5;
long long fact[n];
int main()
{
	fact[0]=fact[1]=1;
    for(int i=2;i<n;i++)
        fact[i]=fact[i-1]*i;
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<fact[x]<<endl;
    }
    return 0;
}