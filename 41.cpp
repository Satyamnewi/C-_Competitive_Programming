//Vector of vectors - Means we can increment value row-wise as well as column wise
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <vector<int> >v;

    //Inserting
    for(int i=0 ; i<n ; i++)
    {
        int m;
        cin >> m;
        vector<int> temp; //We made this cause we will store all the vector or 1 row here and then push everuthing at once at line 23
        for(int j=0 ; j<m ; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp); //Here we pushed the entire row 
    }
    //Printing
    cout << "Given Array is : " << endl;
    for(int i=0 ; i<v.size() ; i++)
    {
        for(int j=0 ; j<v[i].size() ; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0; 
}