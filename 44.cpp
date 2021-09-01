//Map question by its properties
//Given N strings print unique strings in lexiographic order with their frequency
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string,int> m;
    for(int i=0 ; i<n ; i++)
    {
        string str;
        cin >> str;
        m[str] = m[str] + 1;
    }
    cout << "Frequency of  strings is : " << endl;
    for(auto it : m)
        cout << it.first << " " << it.second<<endl;
    return 0; 
}
