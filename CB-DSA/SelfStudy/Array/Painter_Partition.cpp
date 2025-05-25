

#include <iostream>
#include <vector>
using namespace std;
bool isvalid(vector<int> arr, int n , int m , int max_allowed_length){
    int painter=1, board_length=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max_allowed_length) return false;
        if(board_length+arr[i]<=max_allowed_length){
            board_length+=arr[i];
        }
        else{
            painter++;//doosre painter ko dedenge
            board_length=arr[i];// usko reset krdenge fro new painter

        }
    }
    return painter>m?false:true;// 2 painter paint krpaayenge to valid nhi to invalid if invalid to max_allowed length badhayo st=mid+1
    
}
int min_time_to_paint(vector<int> arr, int n , int m){
    if(m>n) return -1;
    int sum=0, maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        maxi=max(maxi,arr[i]);// maximu time taken by single board

    }
    int st=maxi, end=sum, ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr,n ,m,mid)){
            end=mid-1;// try to mimize the maximum time taken
            ans =mid;
        }
        else{
            st=mid+1;// nhi to time ko badhayo taaki (m) painter paint krpaaye given time mein
            
        }
    }
    return ans;
    
}
int main(){
    vector<int>arr={40,30,10,20};
    int n=arr.size();
    int m=2;// number of painters
    cout<<min_time_to_paint(arr, n,m)<<endl;
}
