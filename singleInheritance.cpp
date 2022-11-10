//Program to print a single inheritance.

#include <iostream>

using namespace std;

//base class

class father{
    public:
    void height(){
        cout<< "I am tall!\n";
    }
    void skintone(){
        cout<< "I have my father's skintone!\n";
    }
};

//derive class

class son: public father{
    public:
    void intelligence(){
        cout<< "I am Intelligent!\n";
    }
};
int main(){
    //create object of the son class

    son son1;

    //calling members of the base class
    son1.height();
    son1.skintone();

    //calling member of the derived class
    
    son1.intelligence();

    return 0;
}
