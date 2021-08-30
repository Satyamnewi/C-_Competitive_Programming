// Codechef - CHFICRM
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[3] = {0,0,0};
        int n,check=0;
        cin >> n;
        for(int i=0 ; i<n ; i++)
        {
            int x;
            cin >> x;
            
            if(x == 5)
                a[0]++;
            
            else if(x == 10)
            {
                if(a[0] >= 1)
                {
                    a[1]++;
                    a[0]--;
                }
                else
                    check++;
            }
            else
            {
                if(a[1] >=1)
                {
                    a[2]++;
                    a[1]--;
                }
                else if(a[0] >= 2)
                {
                    a[2]++;
                    a[0]=a[0]-2;
                }
                else
                    check++;
            }
        }
        if(check == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0; 
}