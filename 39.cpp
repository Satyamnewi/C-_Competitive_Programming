//Range based loops and auto keyword demo
//Maps  - Insert, Traverse, Search
/*
    Stores in sorted way
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v {1,2,3,4,5,6,7,8};
    for(auto val : v) //or for(int val : v) 
        cout << val << " " <<endl;

    //BEST EXAMPLE : We generally use this when declaring iterator is too long like
    vector<pair<int,int> > v_p = {{1,2}, {2,3}};
    
    //Printing with iterator without auto
    cout << "Printing with iterator without auto : " << endl;
    vector<pair<int,int> > :: iterator it;
    for(it = v_p.begin() ; it != v_p.end() ; it++)
        cout << it->first <<" " << it->second << endl;

    //Priting without iterator without auto
    cout << "Priting without iterator without auto : " << endl;
    for(pair<int,int> value : v_p)  //We see we didnt have to declare iterator as we used Range based loops
        cout << value.first <<" " << value.second << endl;

    //Priting without iterator with auto
    cout << "Priting without iterator with auto : " << endl;
    for(auto value : v_p)           //We see here we didnt have to specify the data type as it auto detects that
        cout << value.first <<" " << value.second << endl;
    return 0; 
}
