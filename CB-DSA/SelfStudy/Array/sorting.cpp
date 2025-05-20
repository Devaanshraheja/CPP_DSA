#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[]={9,8,7,6,5,4,3,2,1};
    int n= sizeof(a)/sizeof(int);

    sort(a,a+n, greater<int>());// sorts in descending order
    // sort(a,a+n);// sorts in ascending order
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    

}