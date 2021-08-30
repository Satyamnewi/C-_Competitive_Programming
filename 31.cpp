//Maps  - Insert, Traverse, Search
/*
    Stores in sorted way
*/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int a[N];
int main()
{
    map<int,int> m;
    //Show the frequency of each element
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];
    
    for(int i=0;i<n;i++)
        m[a[i]]++;

    map<int,int> :: iterator it;  //As maps dont have index these are used for that
    for(it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second <<endl;
    

    //To search a element x here
    int x;
    cin >> x;
    
    it = m.find(x);
    if(it != m.end())
        cout << it->first << " " << it->second << endl;

    return 0; 
}