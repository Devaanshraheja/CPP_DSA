#include<iostream>
using namespace std;
int linearsearch (int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
    

}
int main(){
    int nums[]={12,13,14,15,16,17,18};
    int size=7;
    int target=18;
    cout<<linearsearch(nums,size,target)<<endl;
}