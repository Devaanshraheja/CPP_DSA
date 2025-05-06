#include<iostream>
#include<stack>
using namespace std;
int main(){
    int a[]={6,2,1,3,4,4,7};
    int  n = sizeof(a)/sizeof(int);
    int previous_greater[100];
    stack <int > s;
    for (int i = n-1; i >=0; i--)
    {
        while(!s.empty() && a[i]>a[s.top()]){
            previous_greater[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        previous_greater[s.top()]=-1;
        s.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<previous_greater[i]<<" ";
    }
    
    
}