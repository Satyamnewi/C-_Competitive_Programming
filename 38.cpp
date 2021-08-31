//Pointers in detail
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    cout << "Address of a : " << &a << endl;

    int *p;
    p = &a;
    cout << "Address using pointer of a : " << p <<endl;
    
    p=p+1;
    cout << "Adding 1 to the address of a : " << p <<endl;
    
    cout << "Value of a using pointer : " << *p <<endl;

    //changing value using pointer
    *p = *p + 1;
    cout << "Changed value using Address pointer of a : " << *p <<endl;

    int **p2; //Double pointer stores the address of the pointer
    p2 = &p;
    cout << "Double pointer of a : " << p2 <<endl;

    return 0;
}