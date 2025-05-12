#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> arr,int target){
    vector<int> ans;
    int n= arr.size();
    int i=0,j=n-1;// two pointer approach use krrhe
    while(i<j){// jab tak i jo ko collapse na kr jaaye 
        int ps=arr[i]+arr[j];
        //ps jo hai agra vo taeget se chota aaye 
        if(ps<target){
            i++;// i pointer ko badha do
        }
        else if(ps>target){//agar ps target se badha ho
            j--;// j pointer ko biche krr do
            
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            break;


        }

    }

    return ans;
    
}


int main(){
    vector<int> arr={2,3,5,7};
    int target=9;
    vector<int>ans;
    ans=pairsum(arr,target);
    cout<<ans[0]<<" ' "<<ans[1]<<endl;
    return 0;

}