#include<iostream>
using namespace std;

int main()
{
    cout<<"------------------------------------------------------------------------------------------------"<<endl;
    cout<<"This Note contains ::"<<endl<<"  1. if...else"<<endl<<"  2. switch...case"<<endl<<"  3. loops"<<endl;
    cout<<"------------------------------------------------------------------------------------------------"<<endl;  //Just remove commenting from Examples to run them :)
    
    /*
    ! ******************************************IF/ELSE statement*******************************************/
        //?Syntax:
            // if(condition1)
            // {
            //     /*code*/
            // }
            // else
            // if(condition2)
            // {
            //     /* code */
            // }
            // else
            // {
            //     /* code */
            // }
            
        /* Example:-
            int a,b;
            cout<<"A = ";
            cin>>a;
            cout<<"B = ";
            cin>>b;
            if(a==b)
            {
                cout<<"A = B"<<endl;
            }
            else
            if(a<b)
            {
                cout<<"A < B"<<endl;
            }
            else
            {
                cout<<"A > B"<<endl;
            }
        ****/

    /* 
    ! ****************************************SWITCH-CASE statement*****************************************/
        //?Syntax:
            // switch(/*Declared variable here*/)
            // {
            //     case /*value here*/:
            //         /*code*/
                
            //     default:
            //         /*code*/
            // }

        /* Example:-
            int marks;
            cout<<"Enter the value ::";
            cin>>marks;
            switch(marks)
            {
                case 100:
                    cout<<"Congo! You got a full marks"<<endl;
                    break;           //here 'break' just breaks whole the loop and make one ot of it and
                                            'continue' just break that particular part and keep the loops going on as it is

                case 0:
                    cout<<"You got an egg, dumbass "<<endl;
                    break;

                case 50:
                    cout<<"You got 50% "<<endl;
                    break;

                default:
                    cout<<"Nothing left at all";
                    break;
            }
        ****/

    /*
    ! ************************************************LOOPS*************************************************/

        //? 3 Types of loops in C++;
            /*
            1. For Loop
            2. While Loop
            3. do-While Loop
            */

    /*
    !--> FOR LOOP********************/
        //? Syntax:
           
            // for(initialize; condition; updation)
            // {
            //      /*code*/
            // }

        /* Example:-        
            int n;
            char a;
            cout<<"Enter any character :: ";
            cin>>a;
            cout<<"Enter the no. of times you wanna print it ::";
            cin>>n;
            for(int i=0; i<n; i++)
            {
                cout<<" "<<a<<endl;
            }                 
        ****/
    
    /*
    !--> WHILE LOOP********************/

        //?Syntax:
            // /*variable declaration*/
            // while(condition)
            // {
            //     /*code or statements also updation(i.e. i++) here*/
            // }        

        /* Example:-
            int n;
            cout<<"Enter a Number ::";
            cin>>n;
            cout<<"OK, printing from 1 to "<<n<<endl;
            int i=1;
            while(i <= n)
            {
                cout<<" "<<i<<endl;
                i++;
            }
        ****/   

    /*
    !--> do-WHILE LOOP********************/
        //?Syntax: 
            // do
            // {
            //     /*code or statements also updation(i.e. i++) here*/
            // } while (condition);

        /* Example:-
            int n;
            cout<<"Enter a Number ::";
            cin>>n;
            cout<<"OK, printing from 1 to "<<n<<endl;
            int i=1;
            do
            {
                cout<<" "<<i<<endl;
                i++;
            } while (i<=n);
        ****/            
            
    return 0;
}