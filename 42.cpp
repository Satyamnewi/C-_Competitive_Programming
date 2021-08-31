//CPAIRS
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
long long int a[N];
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int n,c=0,even=0;
       cin >> n;
       
        for(int i=0 ; i<n ; i++)
            cin >> a[i];
        for(int i=0 ; i<n ; i++)
        {
            if(a[i]%2 == 0)
                even++;
            else
                c = c+even;
        }
        cout << c <<endl;
   }
    return 0; 
}
