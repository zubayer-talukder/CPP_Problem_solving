// 91 - 100 Excellent
// 71 -90 very Good
// 51 -70 Can Do Better
// <= 50 Average
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Your Marks : ";
    cin >> x ;
    if ( x >= 90)
    cout << "Excellent. ";
    else if ( x >= 71 )
    cout << " Very Good. ";
    else if ( x >= 51 )
    cout << " Can Do Better. ";
    else 
    cout << "Average. ";

}