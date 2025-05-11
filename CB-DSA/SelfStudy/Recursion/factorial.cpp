#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0) return 1;// base case 
    // recursive relation
    return n*factorial(n-1);
}
 int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;

 }