#include <iostream>
using namespace std;
struct node{
    int val;
    node*next;
};
int main() {
    node*head=NULL;
    node*tail=NULL;
    int value;
    cout<<"enter values:\n";
    cin>>value;
    while(value!=-1){
        node*newnode=new node{value,NULL};
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>value;
    }
    if(head==NULL){
        cout<<"type atleast one value you asshole\n";
        return 0;
    }


    node*temp=NULL;
    tail=head;
    while(tail!=NULL){
        temp=tail;
        while(temp->next!=NULL){
            if(tail->val==temp->next->val){
                temp->next=temp->next->next;
                
            }
            else temp=temp->next;
        }
        tail=tail->next;
    }

    temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    return 0;
}