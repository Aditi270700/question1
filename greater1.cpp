#include <iostream>
using namespace std;
int main(){
    int number1,number2;
    cout << "enter number 1" <<"\n";
    cin >> number1;
    cout << "enter number 2" << "\n";
    cin >> number2;
    if(number1>number2){
        cout << "number 1 is greater" << "\n";
    }
    else{
        cout << "number 2 is greater" <<"\n";
    }
    return 0;
}