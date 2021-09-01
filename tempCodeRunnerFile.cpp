//Hackerearth - Monk and the Magical Candy Bags - https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        multiset<int> s;
        for(int i=0 ; i<n ; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        auto ele = (--s.end());
        //cout << *ele;
        int sum=0;
        for(int i=0 ; i<k ; i++)
        {
            auto ele = (--s.end());
            sum = sum+(*ele);
            s.erase(ele);
            s.insert(*ele/2);
        }
        cout << sum <<endl;
    }
    return 0; 
}