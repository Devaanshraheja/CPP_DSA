#include<iostream>
using namespace std;
void generate_sub_array(int a[], int n){
    
    for (int i = 0; i < n; i++)//0,0 0,1 0,2 0,3 
    {
        for (int j = i; j<n; j++)
        {
            for (int k = i;  k<=j; k++)
            {
                cout<<a[k];
            }
            cout<<endl;
            

        }
        
    }
}
int main(){
    int a[]={1,2,3,4};
    int n =sizeof(a)/sizeof(a[0]);
    generate_sub_array(a,n);

    return 0;
    
    cout<<"hi"<< endl;
    cout<<"hi"<< endl;
    }
    }

    
