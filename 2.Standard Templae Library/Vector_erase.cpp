#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector<int> &vect){
    vector<int> :: iterator it;
    cout<<vect.size()<<"\n";
    
    for(it = vect.begin(); it < vect.end(); it++){
        cout<<(*it)<<" ";
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0; i<n; i++) {
        int input;
        cin>>input;
        v.push_back(input);
    }
    int x,a,b;
    cin>>x;
    x = x-1;
    v.erase(v.begin()+x);
    cin>>a>>b;
    a=a-1;
    b=b-1;
    v.erase(v.begin()+a, v.begin()+b);
    display(v);
    
    return 0;
}
