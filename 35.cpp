//Hackerrank - Sets-STL - https://www.hackerrank.com/challenges/cpp-sets/problem
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
char a[N];
int main()
{
    int t;
    cin >> t;
    set<int> s;
    while(t--)
    {
        int x ;
        int n;
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
            
            /*
                set<int> :: iterator it;
                it = s.find(n);
                if(it != s.end())
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;

                    OR

                cout << (s.find(n) == s.end() ? "No" : "Yes") << endl;
            */
        }
    }
    return 0; 
}