#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary_search(vector<int>arr1,int target, int n){
   
    int st=0, end=n-1;
    while(st<=end){

        int mid=(st+end)/2;
        if(target>arr1[mid]){
            st=mid+1;
        }
        else if(target<arr1[mid]){
            end=mid-1;
        }
        else return mid;
    }
    return -1;

}
int main(){
    vector<int> arr1={1,2,3,4,5,6,7,8,12};
    int n= arr1.size();
    int target=12;
    cout<<binary_search(arr1,target,n)<<endl;
    vector<int>arr_2={1,2,4,7,8,9,21,43,54,43};
    int n1=arr_2.size();
    int target_1=21;
    cout<<binary_search(arr_2,target_1,n1);


}
