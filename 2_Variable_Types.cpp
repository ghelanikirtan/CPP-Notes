#include<iostream>
using namespace std;

/*
! ****************************Variable Types****************************/

int glo = 5; //gobal variables
void laud()
{
    int a;
    cout<<glo<<endl;
}

int main()
{
    int glo=9; // local variables (PRIORITY IS GIVEN TO LOCAL VARIABLES)
    glo=789;   // It updates the 9 to 789 (i.e. priority given to local variables)
    laud();
    cout<<glo<< endl;
    cout<<::glo; // 'scope resolution operator' - for using GLOBAL variables
    return 0;
} 