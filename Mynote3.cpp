#include<iostream>
using namespace std;
int main()
{
    cout<<"------------------------------------------------------------------------------------------------"<<endl;
    cout<<"This Note contains ::"<<endl<<" --> OPERATORS and their types"<<endl;
    cout<<"------------------------------------------------------------------------------------------------"<<endl;     //Just remove commenting from Examples to run them :)  
    
    
    /* 
    ! *********************************************OPERATORS*****************************************/
    int a, b;
    cout<<"Enter the value of a: ";   // '<<' is called INSERTION operator  --> It gives output to user 
    cin>>a;                           // '>>' is called EXTRACTION operator --> It takes input from user
    cout<<"Enter the value of b: ";   
    cin>>b;
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    
    cout<<"Operators in C++: \n";
    // ? Arithmetic operators
        /**
        cout<<"The value of a + b is "<< a+b <<endl;   //sum
        cout<<"The value of a - b is "<< a-b <<endl;   //difference
        cout<<"The value of a * b is "<< a*b <<endl;   //multiplication
        cout<<"The value of a / b is "<< a/b <<endl;   //divides
        cout<<"The value of a % b is "<< a%b <<endl;   //modules
        cout<<"The value of a++ is "<< a++ <<endl;     //it will print 'a' no. and then increases it by 1 
        cout<<"The value of a-- is "<< a-- <<endl;     //it will print previous outcome and then decreases it by 1
        cout<<"The value of ++a is "<< ++a <<endl;     //first add by 1 then prints
        cout<<"The value of --a is "<< --a <<endl;     //first substract by 1 then prints
        
        **********************************************************************************************/
    
    // ? Assignment operators --> used to assign values to variables 
        /**
           int a=3, b=8;
           char c ='c'
           bool tr = true  ...etc)
        ************************/
    
    // ? Comparison operators --> used to compare values        (0-->false && 1-->true)
        /**
        cout<<"The value of a == b is "<< (a==b) <<endl;          // is equal to      
        cout<<"The value of a != b is "<< (a!=b) <<endl;          // is not equal to 
        cout<<"The value of a >= b is "<< (a>=b) <<endl;          // is equal to greater than  
        cout<<"The value of a <= b is "<< (a<=b) <<endl;          // is equal to less than
        cout<<"The value of a > b is "<< (a>b) <<endl;            // is greater than
        cout<<"The value of a < b is "<< (a<b)<<endl;             // is less than
        
        **********************************************************************************************/

    // ? Logical operators  
        /**
        cout<<"Following are the Logical operators in C++ "<<endl;
        cout<<"The value of ((a==b) && (a<=b)) is : "<<((a==b) && (a<=b))<<endl; // '&&' is AND operator
        cout<<"The value of ((a==b) || (a<=b)) is : "<<((a==b) || (a<=b))<<endl; // '||' is OR operator
        cout<<"The value of (!(a==b)) is : "<<(!(a==b))<<endl;                   // '!' stands for NOT operator
        **********************************************************************************************/

    return 0;
}
 