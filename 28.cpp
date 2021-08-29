// Vector - Such array whose size is dynamic
// Taking Input and printing back the elements
#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v) //Directly passing like this make a copy of v and then passes which is expensive operation instead we can do
//void printVec(vector<int> &v)  -->This pass the actual address of v and doesnt consume O(n) time in copying
{       
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    
    cout << endl;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x); //This adds the element to the back of the vector
    }
    printVec(v); //Function made to print the elements

    v.pop_back(); // Pops the element from the last
    printVec(v);
    return 0;
}
/*
    Also we can give the size of the vector by ourself as
    vector<int> v(5);   Makes vector of size 5 as :               0 0 0 0 0
    vector<int> v(5,3); Makes vector of size 5 intialize with 3 : 3 3 3 3 3
    If we push the value 7 by v.push_back(7) then it would give : 3 3 3 3 3 7 --> It would increase the size of vector and append at end
    
    Copy the vectors from one to another, it directy copies all element like
    vector<int> v2=v; It has O(n) complexity so note its expensive for time use wisely

*/