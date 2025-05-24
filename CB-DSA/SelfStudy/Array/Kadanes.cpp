#include<iostream>
#include<algorithm>
using namespace std;
void kadanes_algo(int a[], int n ){
    int sum=0, wj ,wi, start;
    int max_sum=INT_MIN;
    for(int i=0;i<=n;i++){

        if(sum==0) start=i;// jo element se sub array bnna start hoga
        sum+=a[i];
        if(sum<0){
            sum=0;// jab bhi sum negatuve hoga hum usko 0 se reintialize krdenge

        }
        if(sum>max_sum){
            max_sum=sum;
            wj=i;// jo current index vo subaaray ka last index hoga
            wi=start;// irst index of the sub-array
        }
    }
    for (int i = wi; i < wj; i++)
    {   

        cout<<a[i]<<" ";
    }
    
}

int main(){
    int a[]={-12,10,-2,-2,-1,11};
    int n =sizeof(a)/sizeof(a[0]);
    kadanes_algo(a,n);

    return 0;
}