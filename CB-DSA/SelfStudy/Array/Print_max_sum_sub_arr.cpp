#include<iostream>
#include<bits\stdc++.h>
#include<climits>
using namespace std;
void generate_max_sum_sub_array(int a[], int n){
    int max_sum=INT_MIN;
    int wi, wj;
    
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int sum =0;// jab jab j update hoga we need a new sum to store value 
                for (int k = i; k <= j; k++)
                {   
                    sum+=a[k];
                    
                }
                if(sum>max_sum) {
                    max_sum=sum;
                    wi=i;
                    wj=j;
                }
            }
            
        }
        
    }

    cout<<"The maximum sum is "<<max_sum<<endl;
    for(int i=wi; i<=wj;i++){
        cout<<a[i]<<" ";
    }
    
}
int main(){
    int a[]={1,2,3,4};
    int n= sizeof(a)/sizeof(int);
    generate_max_sum_sub_array(a,n);
}
