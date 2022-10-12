//C++ Program to determine area of a circle
/*Header file*/
#include <iostream>
using namespace std;

//function prototype---Notifying the compiler that there is a function to expect 
float circle_area(int r);
/*Start of execution*/
int main(){
    int radius;
    float Area;
    
    //user proption
    cout<<"Enter radius\n";
    cin>>radius;

    //function calling
    Area=circle_area(radius);
    cout<<"The area is\n"<<Area;

    return 0;

}
//function defination
float circle_area(int r){
    float Area;
    Area=3.142*r*r;
    return Area;
 }