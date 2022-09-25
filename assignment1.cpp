//Program to give bonus to employees

#include <iostream>
using namespace std;

int main(){
    int time;

    float salary,bonus;
    
    cout<<"Input your salary\n";
    cin>>salary;

    cout<<"Input duration of Service\n";
    cin>>time;

    if(time>10){
        bonus=salary*10.0/100.0;
    }
        
    
    else if((time>=6)&(time<=10)){
        bonus=salary*8.0/100.0;
    }
        
    else if((time<6)&(time>=0)){
        bonus=salary*5.0/100.0;
    }
    salary=salary+bonus;
    cout<<"Your Total Salary is"<<salary;

    return 0;
}