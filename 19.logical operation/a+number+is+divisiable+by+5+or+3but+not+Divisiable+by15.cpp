#include<iostream>
using namespace std;
int main()
{
    int Num;
        cout << "Enter a Number : ";
        cin >> Num;

    if ( (Num % 5 == 0 || Num % 3 == 0) && Num % 15 != 0 )
        cout << "You Number is Divisiable by 3 or 5";

    else 
        cout <<"Invalid inputs";
}