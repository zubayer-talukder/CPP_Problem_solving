//Que. take a positive integer input and tell if it is divisible by 3 or 5 
#include<iostream>
using namespace std;
int main()
{
    int a,b,c ;
    cout<< "Enter 1st number ";
    cin>> a;

    cout<< "Enter 2nd number ";
    cin>> b;

    cout<< "Enter 3rd number ";
    cin>> c;

    if( a>=b && a>=c  ){
        cout << a ;
        cout << " is the gretest number ";

    }
    else if (b>=c && b>=a) {  
        cout << b ;
        cout << " is  the gretest number ";
}
    else if (c>=b && c>=a) {  
            cout << c ;
            cout << " is the gretest number ";
}
}
