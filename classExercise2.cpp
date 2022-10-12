//Program to convert degrees fahrenheit to degree celcius

#include<iostream>
using namespace std;

int main(){
    
    float celcius,Fahrenheit;

    cout<<"Enter Tempurature in Fahrenheit(in degrees)\n";
    cin>>Fahrenheit;
    celcius =(Fahrenheit - 32)*5/9;
    
    cout<<"Temperature in celcius(in degrees)\n"<<celcius;
    return 0;
}
