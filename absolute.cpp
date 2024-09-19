// write a programm print absolute value
#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter the number" << "\n";
    cin >> number;
    if(number>=0){
cout <<"absolute value is " << number <<"\n";
    }
    else
    {
        cout << "absolute value is " << -number << "\n";
    }
}