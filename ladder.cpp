#include <iostream>
using namespace std;
int main (){
float physics;
float chemistry;
float maths;
float total;
float percent;
cout << "Enter the physics mark" << "\n";
cin >> physics;
cout << "Enter the chemistry mark" << "\n";
cin >> chemistry;
cout << "Enter the maths mark" << "\n";
cin >> maths;
total = physics + chemistry + maths;
percent = total/3;
if(physics<35 && chemistry>=35  && maths<35){
cout << "fail";
}
else if(physics<35 && chemistry<35  && maths>=35){
cout << "fail";
}
else if(physics >= 35 && chemistry<35  && maths<35){
cout << "fail";
}
else if(physics>=35 && chemistry>=35  && maths<35){
cout << "you got supply in maths";
}
else if(physics<35 && chemistry>=35  && maths>=35){
cout << "you got supply in physics";
}
else if(physics>=35 && chemistry<35  && maths>=35){
cout << "you got supply in chemistry";
}
else if(percent >= 60 && percent <=100){
cout << "1st division";
}
else if(percent >= 50 && percent <=59){
cout << "2nd division";
}
else if(percent >=40  && percent <=50){
cout << "3rd division";
}
else{
    cout << "fail";
}

    return 0;
}