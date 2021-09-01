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
        multiset<long int> s;    //Multiset is used instead of set because candies can be two times also and not unique and set always have unique values
        for(int i=0 ; i<n ; i++)
        {
            long int x;
            cin >> x;
            s.insert(x);
        }
        auto ele = (--s.end());
        //cout << *ele;
        long int sum=0;
        for(int i=0 ; i<k ; i++)
        {
            auto ele = (--s.end()); //ele has the address of the end point
            sum = sum+(*ele);       //*ele gives the value at that point or the element
            s.erase(ele);           //We are deleting by address or ele because we want to delete only that particular element. if we wanted to delete all instances of *ele then we would write there *ele
            s.insert(*ele/2);       //After bag is thrown value becomes half so adding that half value
        }
        cout << sum <<endl;
    }
    return 0; 
}