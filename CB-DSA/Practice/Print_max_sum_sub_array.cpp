#include <iostream>
#include<climits>// this is for using int_min int_max
using namespace std;
void print_subarray_with_max_sum(int a[], int n ){
    int max_sum=INT_MIN;
    int wi, wj;
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k<n; k++)
        {
            int sum=0;
            for (int m = i; m<=k; m++)
            {
                sum=sum+a[m];
               
            }
            if(sum>max_sum) {
                max_sum=sum;
                wi=i;
                wj=k;
            }

            
        }
        
    }
    for (int i = wi; i <=wj; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}
int main(){
    int a[]={51,1,2,3,56,4,-1,};
    int n=sizeof(a)/sizeof(int);
    print_subarray_with_max_sum(a,n);
    return 0;
}