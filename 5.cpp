//CodeForces - A. Pasha and Stick(********COMBINOTRICS PROBLEM *********)
//https://www.youtube.com/watch?v=9Vm4B6aD4hc
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int w,c=0;
    cin>>w;
    if(w%2!=0)
        c=0;
    else
    {
        c=((w/2)-1)/2;
    }
    cout<<c;
    return 0;
}

/*
Problem was to break a stick of length w into three areas such that all the four parts can form side of rectangle an not side of square. output total combination possible

Approach - If w is odd we cant break the stick so answer 0
if w is even we split into two parts and further divide it into two unequal parts
*/