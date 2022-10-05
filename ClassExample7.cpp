// For loop sum Program

#include <iostream>
using namespace std;

int main(){
    //declare variable

    int i, sum=0;


    // Add numbers from 1 to 10
    for(i=1; i<=10;i++){
       cout<<i<<" ";
       sum=sum+i;
    }
    cout<<"sum of the numbers "<<sum;
    
    return 0;
}
