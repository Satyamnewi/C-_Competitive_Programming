//Sets question by its properties
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<string> s;
    for(int i=0 ; i<n ; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    for(auto it : s)
        cout << it << endl;
    return 0; 
}
