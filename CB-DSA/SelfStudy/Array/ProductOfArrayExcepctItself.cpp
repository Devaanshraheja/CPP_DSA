#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    int left[100];
    int right[100];
    int resultant[100];



    // let sub array 
    left[0]=1;
     
     for (int i = 1; i < n; i++)
     {
        left[i]=left[i-1]*a[i-1];
     }
     // Right sub array 
    right[n-1]=1;
     
    for (int i = n-2; i >= 0; i--)
    {
       right[i]=right[i+1]*a[i+1];
    }
    // resultant array
    for (int i = 0; i < n; i++)
    {
        resultant[i]=left[i]* right[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<resultant[i]<<" ";
    }
    
    
}