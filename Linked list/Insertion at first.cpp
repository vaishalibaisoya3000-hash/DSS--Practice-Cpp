#include <iostream>
using namespace std;
struct node {
    int data;
    node*next;
};
struct node1 {
    int data1;
    node1*next1;
};


int main(){
    node*head = nullptr;
    node*tail = nullptr;
    cout<<"Enter elements and enter -1 to stop:\n";
    while(true){
        int value;
        cin>>value;
        if(value==-1)
            break;
        else{
            node*newnode = new node{value,nullptr};
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        }
    }
    node* temp = head;
    cout<<"Linked List : ";
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"nullptr\n";

    cout<<"At first:\n";
    node* newnode= new node;
    cout<<"enter data of new node:";
    cin>>newnode->data;
    newnode->next=head;
    head=newnode;

    temp=head;
    cout<<"Updated LL: ";
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"nullptr\n";

    return 0;
    }