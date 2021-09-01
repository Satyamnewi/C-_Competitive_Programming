//Sets question by its properties
//Given N strings print unique strings in lexiographic order
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
    cout << "Given strings is : " << endl;
    for(auto it : s)
        cout << it << endl;
    return 0; 
}
