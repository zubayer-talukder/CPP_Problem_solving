#include<iostream> 
using namespace std;
int main(){
    // += , -= , /= , *= , %=

    //x = x + 1 --->x++

    int x = 10;
    x +=5; // x = x + 5
    cout<< x << endl ;

    int y = 5;
    y-=2 ; // y = y - 2
    cout << y << endl;
 
    int a = 45;
    a/=5;// a = a / 5
    cout << a << endl;

    int b = 80;
    b*=5; // b = b * 5 
    cout<< b << endl;

    int c =75;
    c %= 4; // c = c % 4
    cout << c <<endl;
     return 0; 

}