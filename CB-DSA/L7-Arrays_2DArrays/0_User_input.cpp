#include<iostream>
#include<vector>
using namespace std;
 int main(){
    int r,c;
    cout<<"Enter the number of rows and column"<<endl;
    cin>>r>>c;
    int a[r][c];
    for(int rows=0;rows<r;rows++){
        for(int columns=0;columns<c;columns++){
            cin>>a[rows][columns];
        }
    }
    for(int rows=0;rows<r;rows++){
        for(int columns=0;columns<c;columns++){
            cout<<a[rows][columns]<<" ";
        }
        cout<<endl;
    }
 }