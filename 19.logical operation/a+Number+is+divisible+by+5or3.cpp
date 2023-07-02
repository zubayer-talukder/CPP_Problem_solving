//Que. take a positive integer input and tell if it is divisible by 3 or 5 
#include<iostream>
using namespace std;
int main()
{
    int a ;
    cout<< "Enter a number ";
    cin>> a;
    if( a % 5 ==0 || a % 3 == 0 ){
        cout << a ;
        cout << " is Divisible by 5 or 3. ";

    }
    else  {  
        cout << a ;
        cout << " is not Divisible by 5 or 3. ";
}

}