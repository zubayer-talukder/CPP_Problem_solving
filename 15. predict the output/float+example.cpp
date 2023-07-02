#include<iostream>
using namespace std;
int main()
{
    float a = 7/22 * (3.14 + 2) * 3 /5;
    // process:
    // a = 7 / 22 * 5.14 * 3/5
    // a = 0 * 5.14 * 0
    // 7 and 22 is a integer value so computer will store the value of 0 only
    cout << a;
    // the answer will be zero 
}