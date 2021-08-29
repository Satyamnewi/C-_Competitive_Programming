//Hackerank - Printing Pattern Using Loops  ---(https://www.youtube.com/watch?v=I7A0mCB4YLg) **********************
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,len,n,up,down,left,right,min,min2,finmin;
    cin>>n;
    len=n*2-1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            up=i;
            down=len-i-1;
            left=j;
            right=len-j-1;
            min=up>down?down:up;
            min2=right>left?left:right;
            finmin=min>min2?min2:min;
            cout<<(n-finmin)<<+" ";
        }
        cout<<endl;
    }
    return 0;
}

/*

For the input 4 
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4


*/