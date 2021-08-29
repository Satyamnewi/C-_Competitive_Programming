//Check the count of each element in the array using Hash
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N];
int hsh[N];
int main()
{
    int n,i;
    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }
    for(i=1;i<=n;i++)
        cout << hsh[i] << " ";
    return 0;
}