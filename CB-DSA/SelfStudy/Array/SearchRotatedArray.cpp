#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int search_rotated_array(vector<int> arr, int n, int target){
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;// mid nikalo
        if(arr[mid]==target) return mid;// agar mid target ke qual hojaaye
        if(arr[st]<=arr[mid]){// left half sorted hai ya nhi
            if(arr[st]<=target && target<=arr[mid]){//target left half mein hai yanhi
                end=mid-1;// agar hai to binary search lgado

            }
            else st=mid+1;// nhi to right half mein dhundne bhej do
        }
        else{// right half sorted hai ya nhi
            if(arr[mid]<=target&& target<=arr[end]){//agar target right half mein hai ya nhi 
                st=mid+1;// binary search laga do
            }
            else{
                end=mid-1;// nhi tu usko left half mein binary search lgado

            }
        }
    }
    return -1;
}
int main(){

    vector<int> arr={3,4,5,6,7,0,1,2};
    int n=arr.size();
    cout<<search_rotated_array(arr,n,0);
    cout<<"search_rotated_array(arr,n,0)";
    
}

