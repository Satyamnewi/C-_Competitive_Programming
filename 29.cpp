//Codechef - FCTRL
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,sum=0,j=1;
        cin >> x;
        while(x/pow(5,j)>0)
            sum=sum+(x/pow(5,j++));
        cout << sum << endl;
    }
    return 0; 
}