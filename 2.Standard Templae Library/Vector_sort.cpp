#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;

void display(vector<int> &vect){
    vector<int> :: iterator iter;
    for (iter = vect.begin(); iter != vect.end(); iter++) {
        cout<<(*iter)<<" ";
        
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> v;
    
    for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}
    
    
    sort(v.begin(), v.end());
    display(v);
    return 0;
}
