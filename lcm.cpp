#include <iostream>
using namespace std;
int main (){
int n1,n2,max;
cout << "Enter 1 no";
cin>>n1;
cout << "Enter 2 no";
cin >>n2;
max=n1>n2?n1:n2;
while(true){
if(max%n1==0 && max%n2==0)
{
cout<<max;
break;
}
max++;
}
return 0;
}