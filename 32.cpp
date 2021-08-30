//Sets 
// Stores in sorted way
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
char a[N];
int main()
{
    //There is a array a,a,b,c,c,d we need to remove all duplicate characters
    set<char> s;
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];
    
    for(int i=0;i<n;i++)
        s.insert(a[i]);

    set<char> :: iterator it;  //This is also used for indexing
    for(it = s.begin() ; it != s.end() ; it++)
        cout << *it <<endl;     //Note we use *it here to print as here we dont have key so we have to point to its address

    //Searching
    char x;
    cin >> x;
    it = s.find(x);
    if(it != s.end())
        cout << *it << " " << endl;

    return 0; 
}