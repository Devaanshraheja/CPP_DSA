#include<iostream>
using namespace std;
void staircase(int a[][4], int n, int m, int key ){
    int i=0, j=m-1;
    while(i<n and j>=0){
        if(a[i][j]<key){i++;}
        else if(a[i][j]>key){j--;}
        else if(a[i][j]==key){
            cout<<i<<","<<j<<endl;
            break;
        }
    }

}
 int main(){
    int a[4][4]={
        {1,4,8,10},
        {2,5,9,15},
        {6,13,18,20},
        {11,14,21,25}
    };
    
    staircase(a,4,4,14);

    

 }