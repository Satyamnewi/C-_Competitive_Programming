// Geeks - Bottom sum - https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N];
int main()
{
    int n,i;
    cin >> n;
    int t;
    cin >> t;
    while(t--)
    {
        int p,q;
        cin >> p >> q;
        a[p]=a[p]+100;
        a[q+1]=a[q+1]-100;
    }
    for(i=1;i<=n;i++)
        a[i]=a[i-1]+a[i];

    int max_ele=a[0];
    for(i=1;i<=n;i++)
        max_ele = max(a[i],max_ele);
        //cout << a[i] <<" ";  
        cout << max_ele;
    return 0;
}