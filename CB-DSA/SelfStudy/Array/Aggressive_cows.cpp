#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispossible(vector<int>&arr, int n , int c , int mid){
    int cows=1, last_spot_cow_placed=arr[0];
    // vector<int> arr={1,2,4,8,9}; here you require sorted array
    for (int i=1;i<n;i++){

        if(arr[i]-last_spot_cow_placed>=mid){
            cows++;// vaha par next cow place krdo
            last_spot_cow_placed=arr[i];// last place ko upddate krdo



        }

    }
    if(cows>=c) return true;
    else {
        return false;
    }
}
int MinDisBetweenCows(vector<int>&arr,int n, int c){
    if(c>n) return-1;// agar cows hi stalls se zyaada hogyi
    sort(arr.begin(),arr.end());
    int st=1;// minimum distance possible between cows
    int end=arr[n-1]-arr[0];
    int  ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(ispossible(arr,n,c,mid)){// agar distance between cows mid ke equal rkh skte to cover all c cows
            st=mid+1;//ab distance maximise krne ka try kro mid jitna distance rkh skte bw cows to fit all c cows
            ans=mid;

        }
        else{// agar distance zyaada hai to fit all cows to distance between each cow kam kro
            end=mid-1;

        }
    }
    return ans;
    
}
int main(){
    vector<int> arr={2,1,4,8,9};
    int n=arr.size();
    int c=2;//number of cows
    cout<<MinDisBetweenCows(arr,n,c)<<endl;
    return 0;


}