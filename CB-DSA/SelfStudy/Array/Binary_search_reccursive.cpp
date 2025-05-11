#include<iostream>

#include<vector>
#include<algorithm>
using namespace std;
int binary_search_recursive(const vector<int>& arr, int target, int start, int end){
    if(start <= end){
        int mid = start + (end - start) / 2;
        if(target > arr[mid]){
            return binary_search_recursive(arr, target, mid + 1, end);
        }
        else if(target < arr[mid]){
            return binary_search_recursive(arr, target, start, mid - 1); // fixed line
        }
        else return mid;
    }
    return -1; // element not found
}

int main(){
    vector<int> vec={12,13,14,15,16,89};
    int n=vec.size();
    cout<<binary_search_recursive(vec,15,0,n-1)<<endl;
    return 0;
}