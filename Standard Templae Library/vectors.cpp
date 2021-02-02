#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*************SORTING****************/

void display(vector<int> &vect)
{
    // iterator is an object that act like a pointer
    vector<int>  :: iterator iter;

    for (iter = vect.begin() ; iter != vect.end() ; iter++)
    {
        cout<<(*iter)<<" ";
    }
    cout<<endl;
}


int main()
{
    //storing & definig vectors
    vector<int> vect1;
        vect1.push_back(5);
        vect1.push_back(78);
        vect1.push_back(57);
        vect1.push_back(65);
        vect1.push_back(3);
        vect1.push_back(2);
        vect1.push_back(1);
        
    //displaying vector
    cout<<"vect. : ";
    display(vect1);

// sorting vector

    //! Ascending order
    cout<<"Asc. : ";
    sort(vect1.begin(),vect1.end());    
    display(vect1);    
    
    //! Descending order
    cout<<"desc. : ";
    sort(vect1.begin(),vect1.end(), greater<int>());    
    display(vect1);    

    return 0;
}


/*
    Refer 
?   https://en.cppreference.com/w/cpp/container/vector 
    for more
*/
