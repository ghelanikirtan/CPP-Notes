#include<iostream>
using namespace std;

/*
! **********************************Using Data types**************************************/

int main()
{
    int a=2, b=5;
    float pi = 3.14;
    char c = 'a';
    bool tr = true; 
    
    cout<<"value of a is "<<a<<" and that of b is "<<b<<endl; //'<<endl' ends that line and start with the next line same as \n
    cout<<"Value of pi is: "<<pi;
    cout<<"\nValue of c is: "<<c;
    cout<<"\n"<<tr<<endl; // for true it will show 1 and 0 for false
    cout<<b<<a<<pi<<tr;
    return 0;
}