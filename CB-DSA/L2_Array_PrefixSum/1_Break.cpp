#include <iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    int key=4;
    int i =0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==key) cout<<"element found at index"<<i;
        break;
    }
    if(i=n){

        cout<<"element not found";
    }
    
}
