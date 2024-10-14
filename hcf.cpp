#include <iostream>
using namespace std;
int main (){
int n1,n2,r;
cout << "Enter 1 no";
cin >> n1;
cout << "Enter 2 no";
cin >> n2;
for(int i=1;i<=n1 || i<=n2;i++){
if(n1%i==0 && n2%i==0)
{
r=i;
}
}
cout<<"h.c.f = "<<r;
}