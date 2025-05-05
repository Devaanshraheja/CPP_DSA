#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,1,90,43,52,31,54,21};
    int n= sizeof(a)/sizeof(int);

    sort(a,a+n, greater<int>());// sorts in descending order
    sort(a,a+n);// sorts in ascending order
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

}