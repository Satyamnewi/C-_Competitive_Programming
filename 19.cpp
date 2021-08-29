//Prefix sum array from point l to r 
//Geeks - https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N];
int p[N];
int r[N]; 
int main()
{
    int n,i;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];

    p[0]=a[0];              //Findind forward prefix
    for(i=1;i<n;i++)
        p[i]=p[i-1]+a[i];

    r[n-1]=a[n-1];          //Finding backward prefix
    for(i=n-2;i>=0;i--)
        r[i]=r[i+1]+a[i];

    int pos=-1;
    for(i=0;i<n;i++)
    {
        if(p[i]==r[i])
        {
            pos=i;
            break;
        }
    }
    cout << pos;
    return 0;
}