#include<iostream>
using namespace std;
class node{
    public:

    int data;
    node* next; // this is called self referential address
    node(int d){// constructor
        data=d;
        next=NULL;
    }
};
int length_LL(node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
void insertion_at_front(node* &head, node* &tail, int data){
    if(head==NULL){
        node* n= new node(data);
        head=tail=n;
    }
    else{
        node*n= new node(data);
        n->next=head;// nye node n ke nex mein next main previous head ka address  dal do
        head=n;// naye node ko head bnado
    }


    
}
void insertion_at_end(node* &head, node* &tail,int data){
    if(head==NULL){
        node*n = new node(data);
        head=tail=n;
    }
    else{
        node* n = new node(data);
        tail->next=n;
        tail=n;
    }
}
void insertion_at_middle( node* &head, node * &tail, int pos , int data){
    if(pos==0){
        insertion_at_front(head,tail,data);
    }
    else if(pos>=length_LL(head)){
        insertion_at_end(head,tail,data);


        
    }
    else{
        node* temp=head;
        for (int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        node* n= new node(data);
        n->next=temp->next;
        temp->next=n;
        
        
    }

}
void print_LL(node * head ){
    while(head!=NULL){
        cout<<head->data<<"->";
        head= head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head, *tail;
    head=tail=NULL;// initially the value of the head tails points towards null
    insertion_at_end(head,tail,1);
    insertion_at_end(head,tail,2);
    insertion_at_end(head,tail,3);
    insertion_at_end(head,tail,4);
    insertion_at_end(head,tail,5);
    insertion_at_middle(head,tail,3,45);
    print_LL(head);
return 0;
}