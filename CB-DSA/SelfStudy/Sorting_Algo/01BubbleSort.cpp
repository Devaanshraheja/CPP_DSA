#include <iostream>
#include <vector>
using namespace std;
vector<int> bubble_sort(vector<int> arr, int n ){// pas by value because we dont want changes in our original array
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <= n-2-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        
        }
    }
    return arr;

    
    }

int main(){
    vector<int> arr={5,4,3,2,1};
    int n=arr.size();
    vector<int> sorted_array1=bubble_sort(arr,n);
    for (int val:sorted_array1)
    {
        cout<<val<<endl;
    }
    
    return 0;
}
