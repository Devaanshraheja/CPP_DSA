#include<iostream>
using namespace std;
class node{
    public:

    int data;
    node* next;// this is called sel refrential call , here next storews the adress of next node
    // constructur or crating new node
    // node(int d){
    //     data=d;
    //     next=NULL;// initially next ke andar null daaldo 
    // }
};
void print_LL_byvalue(node* head){
    
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }

}
void print_LLbyreference(node* &head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
}
    

int main(){
    node a,b,c;
    a.data=1;
    b.data=2;
    c.data=3;

    a.next=&b;
    b.next=&c;
    c.next=NULL;

    node* head=&a;
    node* tail=&c;

    print_LL_byvalue(head);
    cout<<endl;
    print_LLbyreference(head);// call by reference made the value of the pointer null 
    cout<<head<<"  "<<&a<<endl;

}
// #include <iostream>
// using namespace std;

// class node {
// public:
// 	int data;
// 	node* next;
// 	node(int d) { // Node banani hai toh constructor se banwaenge
// 		data = d;
// 		next = NULL;
// 	}
// };

// void printLLByReference(node* &head) {
// 	while (head != NULL) {
// 		cout << head->data << "-->";
// 		head = head->next;
// 	}
// }

// void printLLByValue(node* head) {
// 	while (head != NULL) {
// 		cout << head->data << "-->";
// 		head = head->next;
// 	}
// }


// int main() {
// 	node a(1), b(2), c(3);
// 	// a, b and c are objects of class node
// 	a.data = 1;
// 	b.data = 2;
// 	c.data = 3;

// 	a.next = &b;
// 	b.next = &c;
// 	c.next = NULL;

// 	node *head, *tail;
// 	head = &a;
// 	tail = &c;

// 	printLLByReference(head);
// 	printLLByValue(head);

// 	cout << '\n' << &a << endl;
// 	cout <<  head << endl;






// 	return 0;
// }