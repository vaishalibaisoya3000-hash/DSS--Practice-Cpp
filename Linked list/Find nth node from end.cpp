#include <iostream>
using namespace std;
struct Node{
    int val;
    Node*next;
};
int main() {
    Node*head={NULL};
    Node*tail={NULL};
    int value;
    cout<<"enter values of node:\n";
    cin>>value;
    if(value==-1){
    cout<<"type atleast one value motherfucker\n";
    return 0;
    }
    while(value!=-1){
        Node*newnode=new Node{value,NULL};
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
    int n;
    cout<<"enter the pos from end : ";
    cin>>n;
    int m=n;
    Node*slow=head;
    Node*fast=head;
    while(n>0){
        fast=fast->next;
        n--;
    }
    if(fast==NULL)
    cout<<head->val<<" is the "<<m<<"th node from the end";
    else{
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    cout<<endl<<slow->next->val<<" is the "<<m<<"th node from the end";
    }
    return 0;

}