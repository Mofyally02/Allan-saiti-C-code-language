//Program to convert degrees fahrenheit to degree celsius

#include<iostream>
using namespace std;

float temperature(int Fahrenheit);
float celsius;

int main(){
    
    float celsius,Fahrenheit;

    cout<<"Enter Tempurature in Fahrenheit(in degrees)\n";
    cin>>Fahrenheit;
    
    celsius = temperature(Fahrenheit);
    cout<<"Temperature in celsius(in degrees)\n"<<celsius;

    return 0;
}
float temperature(int Fahrenheit){
    float celsius;
    celsius = (Fahrenheit-32)*5/9;

    return celsius;
}
