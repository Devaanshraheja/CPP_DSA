#include<iostream>
using namespace std;
void insertion_at_end(node*&head, node*&tail, int data){
    if(head==NULL){
        insertion_at_front(head, tail, data);
    }
    else{
        node* n= new node(data);
        n=tail->next;
        tail=n;

    }
}
void printLL(node* head){
    while (head!=NULL)
    {
        
        cout<<head->data<<"->";
        head=head->next;
    }
    
}
void deletion_at_front(node * &head, node* &tail ){
    if(head==NULL) return;
    else if(head->next=NULL){
        delete head;
        head=tail=NULL;
    }
    else{
        node* temp=head;
        head=head->next;
        delete temp;
    }

}
void deletion_at_end(node* & head, node* & tail){
    if(head==NULL) return;
    else if(head->next=NULL){
        delete head;
        head=tail=NULL;
        
    }
    else{
        node * temp= head;
        while(temp->next!=tail){
            temp=temp->next;

        }
        delete tail;
        tail=temp;
        tail->next=NULL;
    }
}
int main(){
    node* head, * tail;
    head=tail=NULL;
    insertion_at_end(head,tail,1);
    insertion_at_end(head,tail,2);
    insertion_at_end(head,tail,3);
    printLL(head);


}