#include<iostream>
using namespace std;
int main(){
    float Principle, Rate, Time;
    Principle = 1000;
    Rate = 7 ;
    Time = 5;
    float Simple_Interest = (Principle * Rate * Time) / 100;
    cout << Simple_Interest<<endl; 
}