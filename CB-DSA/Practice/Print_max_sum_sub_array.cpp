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
void print_subarray_with_max_sum_2(int a[], int n ){
    int max_sum=INT_MIN;
    int wi, wj;
    int csum[1000]={0};

    for (int i = 1; i < n; i++)// here we started the csum array wit index 1 beacuase while calculating sum
    // ofr the sub array csum[i-1] == csum[0-1]=-1 which doesn't exist
    {
        csum[i]=csum[i-1]+a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k<n; k++)
        {
            int sum=0;
            sum=csum[k]-csum[i-1];// here we substiyute the for loop by this prefix sum line
            
            if(sum>max_sum) {
                max_sum=sum;
                wi=i;
                wj=k;
            }

            
        }
        
    }
    for (int i = wi; i <=wj; i++)
    {
        cout <<a[i]<<" ";
    }
    
    
}
int main(){
    int a[]={51,1,2,3,56,4,-1,};
    int n=sizeof(a)/sizeof(int);
    print_subarray_with_max_sum_2(a,n);
    return 0;
}