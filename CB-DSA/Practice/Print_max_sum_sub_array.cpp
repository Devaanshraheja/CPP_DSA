#include <iostream>
#include<climits>// this is for using int_min int_max
using namespace std;
void print_subarray_with_max_sum(int a[], int){
    int max_sum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k<n; k++)
        {
            int sum=0;
            for (int m = i; m<j; i++)
            {
                sum=sum+a[m];
            }
            if(sum>max_sum) max_sum=sum;
            
        }
        
    }
    
}
int main()