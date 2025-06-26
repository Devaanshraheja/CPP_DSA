#include<iostream>
using namespace std;
 
    void waveprint(int a[][4], int n , int m){
        for(int column=0; column<m;column++){
            if(column%2==0){
                for(int row=0;row<n;row++){
                    cout<<a[row][column]<<" ";
                }
            }
            else{
                for(int row=n-1;row>=0;row--){
                    cout<<a[row][column]<<" ";
                }
            }
        }
    }
 int main(){
    int a[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int n=3, m=4;
    waveprint(a,n,m);
 }