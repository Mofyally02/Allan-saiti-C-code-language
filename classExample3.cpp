// program to check the largest of three numbers

#include <iostream>
using namespace std;
int main()
 {
    //declare variable
    int num1,num2,num3;

    //take inputs
    cout<<"Enter three numbers\n";
    cin>>num1>>num2>>num3;

    //when num1 is the largest
    if((num1>=num2) && (num1>=num3))
    {
        cout<< num1<<"is the largest\n";
    }

    //when num2 is the largest
    else if((num2>=num1) && (num2>=num3)){
        cout<<num2<<" is the largest\n";
    }

    //when num3 is the largest 
    else{
        cout<<num3<<"is the largest\n";
    }
    return 0;
}
