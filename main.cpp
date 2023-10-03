// a simple progra to calculate and display the area of 
// a triangle when the user gives the values of the base and height
#include <iostream>
#include "openstatemenst.h"
using namespace std;


int main(){
    float A , b , h ;

    cout<<THE_STATEMENT <<std::endl;
    cout<<ENTRY_1 <<std::endl;
    cin>>b;
    cout<<ENTRY_2 <<std::endl;
    cin>>h;

    A = 0.5*(b*h);
    cout<<THANKS <<std::endl;
    cout<<RESULT <<b <<" and the height as " <<h <<" is " <<A;

    return 0;

}