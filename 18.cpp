//Prefix sum array from point l to r 
//Geeks - https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N];
int p[N]; 
int main()
{
    int n,i;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    p[0]=a[0];
    for(i=1;i<n;i++)
        p[i]=p[i-1]+a[i];
    int t;
    cin >> t;
    while(t--)
    {
        int l,r;
        cin >> l >> r;
        cout << p[r - 1] - p[l - 2] << endl;
    }
    return 0;
}