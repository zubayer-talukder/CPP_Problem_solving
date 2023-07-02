// QUE: Take positive integer input and tell if it is a three digit number or not
#include<iostream>
using namespace std;
int main()
{
    int x ;
    cin >> x;
    if ( x >99 && x < 1000 ){
        cout << "Three Digit integer";
    }
    else 
        cout << " Not 3 digit integer";
}