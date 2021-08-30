//Hackerearth - Sets-STL - https://www.hackerrank.com/challenges/cpp-sets/problem
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
char a[N];
int main()
{
    int t;
    cin >> t;
    set<long long int> s;
    while(t--)
    {
        int x ;
        long long int n;
        cin >> x >> n;
        if(x == 1)
            s.insert(n);
        else if(x==2)
            s.erase(n);
        else
        {
            if(s.end()==s.find(n))
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
            //cout << (s.find(n) == s.end() ? "No" : "Yes") << endl;
    }
    return 0; 
}