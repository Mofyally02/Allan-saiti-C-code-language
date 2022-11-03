//Array programme to display a 2 by 3 by 3 matrix

#include <iostream>

using namespace std;

int main(){
    //This Array can sore up to 18 elements(2*3*3)
    int a[2][3][3]={
                    {{1,2,3},{4,5,6},{7,8,9}},
                    {{10,11,12},{13,14,15},{16,17,18}}
    };
    //Displaying the values with proper index.
    //The outer loop accesses the second dimention of the array
    for(int i=0; i<2; ++i){
        //The middle loop accesses the second dimention of the array
        for(int j=0; j<3; ++j){
            //The innermost loop accesses the third dimention of the array
            for(int k=0; k<3;++k){
                cout<<"a["<<i<<"]["<<j<<"]["<<k<<" ]= "<<a[i][j][k];
            }
        }
    } 
    return 0;

}