#include<iostream>
#include<climits>
using namespace std;
void generate_max_sum_sub_array(int a[], int n){
    int max_sum=INT_MIN;
    
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
                if(sum>max_sum) max_sum=sum;
            }
            
        }
        
    }
    cout<<max_sum<<endl;
    
}
int main(){
    int a[]={1,2,3,4};
    int n= sizeof(a)/sizeof(int);
    generate_max_sum_sub_array(a,n);
}
