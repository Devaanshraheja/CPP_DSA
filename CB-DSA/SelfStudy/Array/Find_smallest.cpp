#include <iostream>
using namespace std;
int main(){
    int nums[]={1,2,3,4,-15,6,7,8,9};
    int size=9;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for (int i = 0; i < size-1; i++)
    {
       smallest=min(nums[i],smallest);
       largest=max(nums[i],largest);

    }
    cout<<"Smallest number = "<<smallest<<endl;
    cout<<"largest number = "<<largest<<endl;
    

}