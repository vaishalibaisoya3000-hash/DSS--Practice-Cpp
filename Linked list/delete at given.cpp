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

    cout<<"enter pos of node to delete:";
    int pos;
    cin>>pos;
    int i;
    node*del=head;
    if(pos==1){
    head=head->next;
    delete del;
    }
    else{
        for(i=1; i<pos-1 && del!=NULL ;i++){
            del=del->next;
        }
        del->next=del->next->next;
    }


    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    return 0;
}
