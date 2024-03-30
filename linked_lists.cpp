#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data =data;
        this->next=NULL;
    }
};

//  4
8 
    7
void insertAtHead(Node* &head, int d){
    Node* temp=new Node(d);
    temp-> next=head;
    head=temp;
    cout<<"insert wala : "<<temp->data<<endl;
}
void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail-> next=temp;
    tail=temp;
}
void insertAtPosition(Node* &head,int position,int d){
    Node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    Node* toinsert=new Node(d);
    toinsert ->next=temp->next;
    temp->next=toinsert;
}

void deleteNode(int position,Node* &head){
    if(position==1){
        Node* temp=head;
        head=head->next;
    }
    else{
        Node* prev=NULL;
        Node* curr=head;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
    }
}
void update(Node* &head,int position){

}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int main() {
    Node* node1 = new Node(10);
    Node* head= node1;
    Node* tail=node1;
    insertAtHead(head,20);
    print(head);
    // insertAtHead(head,30);
    // print(head);
    // insertAtHead(head,40);
    // print(head);
    // insertAtTail(tail,50);
    // print(head);
    // insertAtPosition(head,2,100);
    // print(head);
    // deleteNode(3,head);
    // print(head);
}