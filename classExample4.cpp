// Grading system to show average

#include <iostream>
using namespace std;
int main() {

    //declare variable
    int maths,eng,french,sci,CRE,avg;

    //take input
    cout<<"Enter marks for 5 subjects\n";
    cin>>maths>>eng>>french>>sci>>CRE;
    avg= ( maths+eng+french+sci+CRE)/5;
    
    if((avg>=70) && avg<=100)
    {
        cout<<" Your Grade A";
    }
    else if(avg>=60 & avg>=69)
    {
        cout<<"Your Grade B";
    }
    else if(avg>=50 & avg<=59)
    {
        cout<<"Your Grade C";
    }
    else if(avg>=40 & avg<=49)
    {
        cout<<"Your Grade D";
    }
    else if(avg<=40
    ){
        cout<<"Your Grade E";
    }
    else{
        cout<<"Enter Valid Marks";
    }
    return 0; 

}