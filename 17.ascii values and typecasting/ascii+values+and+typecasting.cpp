#include<iostream>
using namespace std;
int main(){
    char ch ='x';
    int ascii =(int)ch;
    // (int)ch refers that charecter will represent into integer one.

    // some ascii values are
    // 'A'=>65 , 'a'=>97 , '0'=>48
    cout << ascii<<endl;

// other types of printing ascii values
        //type 1
    char ch1= 'e';
    cout << (int)ch1 << endl;
        //type 2
    char ch2= '@';
    cout << ch2+0 << endl;
            // here ch2 is a character variable and 0 is a integer variable 
            //if we add this two types of variable we will find out the ascii value of variable ch2
        


        // integer ascii value to character value
    int y = 86;
    cout << (char)y <<endl;
        // we have typecast this interger value to character value 
    
}
