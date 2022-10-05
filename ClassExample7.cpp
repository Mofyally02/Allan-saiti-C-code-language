// For loop sum Program

#include <iostream>
using namespace std;

int main(){
    //declare variable

    int i,n, sum=0;


    // Decrement form 10 to 1
    for(i=1; i<=10;i++){
       /* cout<<"Hello There\n"<<i; */
       cout<<i<<" ";
       sum=sum+i;
    }
    cout<<"sum of the numbers "<<sum;
    
    return 0;
}