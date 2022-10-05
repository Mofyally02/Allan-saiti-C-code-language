// For loop sum Program Prompting the user to enter the Initial & Final No.

#include <iostream>
using namespace std;

int main(){
    //declare variable

    int i,n1,n2,sum=0;

    //take input
    cout<<"Enter Initial No.\n";
    cin>>n1;
    cout<<"Enter Final No.\n";
    cin>>n2;


    
    for(i=n1; i<=n2;i++){
       cout<<i<<"\n";
       sum=sum+i;
    }
    cout<<"The Sum of"<<n1<<"&"<<n2<<"is"<<sum;
    
    return 0;
}