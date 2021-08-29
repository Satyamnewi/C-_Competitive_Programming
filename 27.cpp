//Pairs Intro
#include <bits/stdc++.h>
using namespace std;
int main()
{
	pair<int, string> p;
    p = make_pair(1,"abc"); //First way to declare pair
    p = {4,"bcd"};          //Second way to declare pair
    //Also we can input element by writing cin >> p.first;
    cout << p.first << " " << p.second <<endl; // To print the first and the second element 

    //Copying pairs to another pair
    pair <int, string> p1=p; 
    p1.first = 2; //It will not change the value as a copy of p is passed similar to pass by value in order to change it we declare it as
    cout << p1.first << endl;
    
    pair <int, string> &p3 = p;
    p3.first=3;
    cout << p3.first << endl;

    /*
    Lets say we want to swap first and last element of both array as
        a[] = {1,2,3};
        b[] = {2,3,4};
        After swap 1st and last element of both with relative to each other it gives
        a[] = {3,2,1};
        b[] = {4,3,2};
        Here we can make a pair and swap them as
    */
    cout << "Array swap" <<endl;
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> p_arr[3];
    p_arr[0]={1,2};
    p_arr[1]={2,3};
    p_arr[2]={3,4};
    swap(p_arr[0],p_arr[2]);
    for(int i=0;i<3;i++)
        cout << p_arr[i].first << " " <<p_arr[i].second <<endl;

    return 0;
}