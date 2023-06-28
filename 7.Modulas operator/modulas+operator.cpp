#include<iostream>
using namespace std;
int main()
{
    int a = 23;
    int b = 22;
    
    cout<< a % b << endl ;
    a = 30;
    b = 35;
    // if a < b then a % b = a [a , b >0]
    // because it a is smaller number than b , so the output will be a '.

    cout << a % b << endl;

    a = 34;
    b = -4; 
    // if a % (-b) = a % b
    cout << a % b<< endl;

    a = -41;
    b = 4;
    cout << a % b <<endl; 
    // if (-a) % b = - (a % b);
    
    a = -69;
    b = -6;
    cout<< a % b << endl;
    // if (-a) % (-b)= - (a % b)
}