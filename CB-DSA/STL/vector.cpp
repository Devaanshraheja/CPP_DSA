#include<iostream>
#include<vector>
using namespace std;
 int main(){
    vector<int> vec;
    vec={1,2,4,5,5,7,7,7,5};
    for( int i : vec){
        cout<<i<<endl;
    }
 }