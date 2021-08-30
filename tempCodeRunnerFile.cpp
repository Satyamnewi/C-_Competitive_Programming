// HackerEarth - Maps-STL - https://www.hackerrank.com/challenges/cpp-maps/problem
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int a[N];
int main()
{
    map<string,int> m;
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int marks;

        if(x==1)
        {
            cin >> marks;
            m[s] = m[s] + marks;
        }
        else if(x==2)
            m.erase(s);
        else
            cout << m[s] << endl;
    }
    return 0; 
}