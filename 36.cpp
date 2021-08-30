// Codechef - KJCPO2  -- Passed test case but wrong submission
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
char a[N];
int main()
{
    int t;
    cin >> t;
    vector<int> v;
    while(t--)
    {
       int n,m,x;
       cin >> n >> m;
       for(int i=0;i<n;i++)
        {
            cin >> x;
            v.push_back(x);
        }
        for(int i=n;i<n+m;i++)
        {
            cin >> x;
            if(std::find(v.begin(), v.end(), x) != v.end())
            cout << "YES" << endl;
            else
            cout << "NO" << endl;

            v.push_back(x);
        }  
    }
    return 0; 
}