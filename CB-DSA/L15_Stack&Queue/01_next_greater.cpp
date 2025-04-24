#include <iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int a[]={6,2,1,3,7,5,10};
    int n= sizeof(a)/sizeof(int);
    int greaterthan[100];
    for (int i = 0; i <n; i++)


    {
        while(!s.empty() && a[i]>a[s.top()]){//agar current building is greater than previous than previous 
            //ke index mein current building daal do
            greaterthan[s.top()]=i;
            s.pop();
        }
        
        s.push(i);
    }
    while (!s.empty())// jo last badi building stack mein reh gya jiske liye koi bada building nhi hai uske lioye kya
    {
        greaterthan[s.top()]=n;
        s.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<greaterthan[i]<<"_";
    }
    
    
}