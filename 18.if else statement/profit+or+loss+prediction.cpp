#include<iostream>
using namespace std;
int main()
{
    int cp , sp;

    cout <<"Enter The selling price of Product : ";
    cin >> sp ;
    cout << "Enter the Cost price : ";
    cin >> cp ;
    if (cp == sp){
        cout<< " No loss or No profit";
    }
    else if( cp > sp){
        cout << "Loss is : ";
        cout << cp- sp;
    }
    else if ( sp > cp){
        cout << "Profit is : ";
        cout << sp- cp;
    }
}