#include<iostream>
#include<queue>
using namespace std;
void print_heap(priority_queue<int, vector<int>, greater<int> > h){
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    cout<<endl;
}
    
int main(){
    priority_queue<int, vector<int>, greater<int> > h;// minheap
    int k=3;
    int cs=0;
    while(-1){
        int data; cin>>data;
        if(data==-1){
            // print the heap
            print_heap(h);
            

        }
        else{
            if(cs==k){
                if(h.top()<data){
                    h.pop();//pop kro min ko
                    h.push(data);
                }

            }
            else{
                h.push(data);
                cs++;
            }
        }
    }
    return 0;

}