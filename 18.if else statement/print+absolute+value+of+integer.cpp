#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<< "Enter A number : ";
    cin>> x ;
    if ( x<0){
        x = x * - 1;
    cout << x;
    }
    else 
        cout<<  x ;
}