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
    int value;
    cin>>value;
    while(value!=-1){
        node*newnode = new node{value,nullptr};
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>value;
    }
    node* temp = head;
    cout<<"Linked List : ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"nullptr\n";

    cout<<"Deletion at end:\n";
    node*prev=head;
    while(prev->next->next!=NULL){
        prev=prev->next;
    }
    node*del=prev->next;
    prev->next=NULL;
    delete del;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    return 0;
}
