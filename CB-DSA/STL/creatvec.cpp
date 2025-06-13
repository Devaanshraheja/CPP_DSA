#include<iostream>
#include<vector>
using namespace std; 
 int main(){
    vector<int> vec(3,21);//3 is the size of the veca nd 21 is a repeatitive val
    for(int i :vec){
        cout<<i<<endl;
    }
 }
