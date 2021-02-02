#include<iostream>
#include<iomanip> //Header file for using setw()
using namespace std;

int main()
{
    cout<<"------------------------------------------------------------------------------------------------"<<endl;
    cout<<"This Note contains ::"<<endl<<"  1. CONSTANTS"<<endl<<"  2. MANIPULATORS"<<endl;
    cout<<"------------------------------------------------------------------------------------------------"<<endl;     //Just remove commenting from Examples to run them :)
/*
! ****************CONSTANTS******************/    
    
    /*
    int a = 12;     //If 'const int a = 12' is used then it will be read only
    cout<<"The value of a was :"<<a<<endl;
    a = 24;         //will show error if 'const' is used
    cout<<"The value of a is :"<<a<<endl;
    */

/*
! ***************MANIPULATORS***************/
    /*
    int a=1, b=11, c=1111;
    cout<<"The value of a without setw is : "<<a<<endl;
    cout<<"The value of b without setw is : "<<b<<endl;
    cout<<"The value of c without setw is : "<<c<<endl;
    cout<<"The value of a is : "<<setw(8)<<a<<endl;
    cout<<"The value of b is : "<<setw(8)<<b<<endl;
    cout<<"The value of c is : "<<setw(8)<<c<<endl;
    */

    return 0;
}