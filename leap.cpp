// write a programm print leap year
#include <iostream>
using namespace std;
int main(){
    int leap_year;
    cout << "Enter the number" << "\n";
    cin >> leap_year;
    if((leap_year%4==0 && leap_year%100!=0)||leap_year%400==0){
cout <<"leap year" <<"\n";
    }
    else{
        cout << " not leap year" << "\n";
    }
}