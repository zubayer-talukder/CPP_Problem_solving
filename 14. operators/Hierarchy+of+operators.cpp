#include<iostream>
using namespace std;
int main(){
    int i = 2 * 3 / 4 + 4 /4 + 8 -2 + 5 / 8 ;
    // hierarchy of operators ( * , / , + , - )
    // left to right
    // so the answer will be 2*3/4 + 4/4 + 8 - 2 + 5/8 
    cout<< i<<endl ;

    // assignment operator hierarchy 
    int a = 50 , b = 89 ;
    
        a += b -= a;
        // the result will be right to left
        // b-=a will be first then a+=b
        //b-=a ....=>>  b=b-a ....=> b=89-50 => b=39
        // a+=b ...=>> a=a+b....=> a= 50+39 => a =89
cout << a <<endl<< b <<endl;
    }