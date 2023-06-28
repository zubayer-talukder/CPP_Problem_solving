#include<iostream>
using namespace std;
int main(){
    cout<< 5/2 << endl;
    // here computer is considering 5 & 2 as a integer so computer will be output as  a integer.
    cout<< 7.0/2 << endl;
    // here 7.0 is a float data type computer will output  as a float data type
    cout<< (float) 9 / 6 <<endl;
    // here (float) means that we have typecast 9 integer to a float. 
int x = 35;
int y = 3;
float z = (float) x / y ;
// x & y is a integer type data, we also need a fraction value of result so have typecast this type of data 
cout <<  z;
}