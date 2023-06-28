#include<iostream>
using namespace std;
int main()
{
    int a =84;
    
    int b;
    b = a;
    a=34;
    cout<< a<<endl<<b<<endl;
    /* here we assign 84 first 
    ,then we have assign b=a it means that b is storing 
    the first value of a; then we assign 34 in a variable
    so computer will print 34 in a variable.
    */
    return 0;
}