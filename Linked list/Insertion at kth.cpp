#include <iostream>
using namespace std;
struct node {
    int data;
    node*next;
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

    cout<<"insertion at any given position:\n";
    cout<<"enter the position:";
    int pos;
    cin>>pos;
    cout<<"enter data:";
    int val;
    cin>>val;
    node*innode=new node{val,NULL};
    int i=1;
    if(pos==1){
        innode->next=head;
        head=innode;
    }
    else {
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    innode->next=temp->next;
    temp->next=innode;
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";

    return 0;
    }