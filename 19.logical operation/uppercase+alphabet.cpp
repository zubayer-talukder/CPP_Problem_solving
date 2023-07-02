#include<iostream>
using namespace std;
int main()
{
    char ch ;
    cout <<"Enter Your Character. ";
    cin>> ch ;
    int ascii = (char)ch;
    if (ascii >=65 && ascii <=90){
        cout <<"Upper Case Alphabet. ";
    }
    else 
        cout << "Condition is not a Matching. ";
    }