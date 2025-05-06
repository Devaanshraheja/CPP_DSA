#include<iostream>
using namespaces std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;

    }


    


};
void length_ll(node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    cout<<cnt;
}
void print_LL(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<NULL;
}
void insertion_at_front(node* head, node*tail, int data){
    if(head==NULL){
        node* n = new node(data);
        head=tail=n;

    }
    else{
        node * n = new node(data);

 
    }
}
void insertion_at_end(node* head, node* tail, int data){
    if(head==NULL){
        node* n= new node(data);
        head=tail=n;
    }
    else{
        node* n= new node(data);
        tail->next=n;
        tail=n;
    }
}
void insertion_at_middle(node* head, node* tail,int pos,int data){
    if(pos==0){
        insertion_at_front(head, tail, data);
    }
    else if(pos>=length_ll(head)){
        insertion_at_end(head, tail, data);
    }
    else{
        node* temp=head;
        for(i=0;i<pos-1;i++){
            temp=temp->next;

        }
        node* n = new node(data);
        n->next= temp->next;
        temp->next=n;
        n
    }

}
 int main(){
    node* head, * tail;
    head=tail=NULL;
    insertion_at_end(head,tail,1);
    insertion_at_end(head,tail,2);
    insertion_at_end(head,tail,3);
    insertion_at_end(head,tail,4);
    insertion_a


 }