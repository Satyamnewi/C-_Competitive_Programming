//Sliding window technique
//Geeks - https://www.geeksforgeeks.org/window-sliding-technique/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N];
int p[N]; 
int main()
{
    int n,i,sum=0;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> a[i];

    int k;
    cin >> k;

    for(i=0;i<k;i++)
        sum = sum + a[i];

    int max_sum=sum;
    for(i=k;i<n;i++)
    {
        sum = sum + a[i]-a[i-k];
        max_sum=max(max_sum,sum);
    }
    cout << max_sum;
    return 0;
}