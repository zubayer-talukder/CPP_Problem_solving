#include<iostream>
using namespace std;
int main()
{
    char ch ;
    cout <<"Enter Your Character. ";
    cin >> ch ;
    int x = (char)ch;
    if ((x >= 65 && x <= 90) || (x >= 97 && x<=122)){
        cout <<" Alphabet ";
    }
    else 
        cout << "Not a Alphabet ";
    }