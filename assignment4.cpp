// Program that impliments class addition

#include <iostream>
using namespace std;

//create a addition class
class addition{
    public:
    int a,b,c;
    int product(){
        return(a*b*c);
    }
};
int main(){
    
    //create object of addition class
    addition addition1;
    int a,b,c,product;
    
    //assigning the value of data members
    addition1.a=22;
    addition1.b=30;
    addition1.c=50;
    product=addition1.product();
    
    //calculate the product

    cout<<"product is=\n"<<product;
    return 0;
}