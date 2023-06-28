#include<iostream>
using namespace std;
int main ()
{
    int x = 7 ;
    int y = 9 ;
    int a,b,c,d;
    // x++ or ++x means same as ( x = x + 1);
    x = x + 1 ;
    x++; //x = x + 1 ;
    ++x; //x = x + 1 ;
    cout<< x<<endl;

    --y; // means as same as (y = y - 1)
    cout << y << endl;
    a = 1;
    b = 7;
    c = 5;
    d = 4;
    cout<< ++a<<endl;
    // we assign a as 1 , it's a pre increment function so it will print 2 as a output 
    cout<< b++<<endl;
    // b is post increment so the value of b will be same as it defined
    cout<< --c<<endl;
    cout<< d--<<endl;


}