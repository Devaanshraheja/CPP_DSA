#include<iostream>
using namespace std;
void rotateimage(int a[100][100],int n ){
    // reverse each row
    for(int row=0;row<n;row++){
        int x=0,y =n-1;
        while(x<y){
            swap(a[row][x], a[row][y]);
            x++;
            y--;

        }
    }
// transpose the matrix
for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        if(i<j){
                        
            swap(a[i][j],a[j][i]);
         }
         }
        }
//print the matrix
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<a[i][j]<<" ";
                    }
     cout<<endl;
                
     }
    }
                

int main(){
            int a[100][100];
            int n;
            cin>>n;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cin>>a[i][j];
                }
            }
            rotateimage(a, n);
         }
