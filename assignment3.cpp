//Do While loop to find numbers between different points

#include<iostream>
using namespace std;

int main(){
  //declare variable

  int n1,n2;

  //take input from the user
  cout<<"Enter Initial No.\n";
  cin>>n1;
  cout<<"Enter Final No.\n";
  cin>>n2;
  //Do While loop to find numbers between initial and final 
  do{
    cout<<n1<<" ";
    ++n1;
  }
  while(n1<=n2);
    
  return 0;
}
