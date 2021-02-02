#include<iostream>
using namespace std;
int main()
{
    cout<<"------------------------------------------------------------------------------------------------"<<endl;
    cout<<"This Note contains ::"<<endl<<"  1. Float, double & long double literals"<<endl<<"  2. Refrence Variables"<<endl<<"  3. TYPECASTING" <<endl;
    cout<<"------------------------------------------------------------------------------------------------"<<endl;     //Just remove commenting from Examples to run them :)   
/*
! ***********Float, double & long double literals**********/
    /*
     float d=11.2f;
     long double e=11.2l;
     cout<<"The size of 11.2 is "<<sizeof(11.2)<< endl;  // 'size of' -->size displaying operator   
     cout<<"The size of 11.2f is "<<sizeof(11.2f)<< endl;
     cout<<"The size of 11.2F is "<<sizeof(11.2F)<< endl;
     cout<<"The size of 11.2l is "<<sizeof(11.2l)<< endl;
     cout<<"The size of 11.2L is "<<sizeof(11.2L)<< endl;
    */

/*
! *****************Refrence Variables**********************/
    //Kirtan ---> Ghelani ---> Ghelu
    /*
    float x = 255;
    float & y = x;       //'&'-- here y is taken as refrence of x (i.e. diff. name of same person) 
    cout<<x<<endl;
    cout<<y<<endl;
    */

/*
! *********************TYPECASTING*************************/
    /*
    int a = 12;
    float b = 12.5;
    char c = 'C';
    cout<<"The value of a is "<<(float)a<<endl;    
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The integer value of b is "<<(int)b<<endl;
    cout<<"The ASCII value of 'C' is "<<int(c)<<endl;

    int d = int(b);
    int e = int(c);
    int f = a + int(b);
    cout<<"d is "<<d<<endl<<"e is "<<e<<endl<<"f is "<<f<<endl;
    */

        //?Find ASCII value of any Letter :-
            /*
            char a;
            cout<<"Enter the letter :";
            cin>>a;
            cout<<"The ASCII value of "<<a<<" is : "<<int(a)<<endl;
            */
           
return 0;
}
