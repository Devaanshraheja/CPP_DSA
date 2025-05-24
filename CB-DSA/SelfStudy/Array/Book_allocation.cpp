#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>arr, int n , int m, int max_alloted_pages){
    int student=1, pages=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max_alloted_pages)return false;
        if(pages+arr[i]<=max_alloted_pages){
            pages=pages+arr[i];// student ko book allot krdo
        }
        else{
            student++;
            pages=arr[i];// reset the value of pages for new student 

        }
    }
    return student>m?false:true;


}


int BooksAllocate(vector<int>arr, int n ,int m ){
    if(m>n)return -1;//jab books se zyaada bache ho
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];//maximum range isse zyaada pages nhi allot ho skte

    }
    int s=0, e=sum, ans=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;

            e=mid-1;// ab hmee left side mein dhundhan ki isse chotti value hai minimize the maximum pages

        }else{
            s=mid+1;// maximum pages badhane padhenge tbhi students kam honge
        }


    }
    return ans;
    
}
int main(){
    vector<int>arr={2,1,3,4};
    int n=arr.size();
    int m=2;// kitne bacho mein distribute krni
    cout<<BooksAllocate(arr,n,m)<<endl;
    return 0;
}