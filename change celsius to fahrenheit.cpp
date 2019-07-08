#include <iostream>
using namespace std;
int main () {
float celsius ;
float fahrenheit;

cout<<"enter celsius temperature : ";
cin>>celsius;
fahrenheit = celsius*9/5+32;
cout<<"fahrenheit = "<<fahrenheit<<endl;
cout<<"Now weather in Thailand is"<<(fahrenheit>=70? " HOT " : " COOL ")<<endl;

return 0;
}
