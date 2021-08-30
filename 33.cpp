// Vectors Basic Application
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
char a[N];
int main()
{
    vector<int> v;
    int n,x;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    for(int i=0 ; i<v.size(); i++)
        cout << v[i] << " "; 

    // //Searching
    int s,f=0;
    cin >> s;
    for(int i=0;i<v.size();i++)
    {
        if(s==v[i])
            f=1;
    }
    if(f==0)
        cout << "Not Present" <<endl;
    else
        cout << "Present" <<endl;

    return 0; 
}