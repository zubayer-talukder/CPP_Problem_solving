#include<iostream>
using namespace std;
int main()
{
    int p , c , m , b;
    float percentage;
    // out of 30 marks
    p = 28;
    c = 27;
    m = 21;
    b = 30;

percentage = ( p + c + m + b) / 4.0 ;
// THIS IS SHORT CUT METHOD OF typecasting in C++
cout << percentage<< endl;
return 0;


}