#include <iostream>
using namespace std;
struct node {
    int data;
    node*next;
};

int main(){
    node*head=nullptr;
    node*tail=nullptr;
    cout<<"Enter Data of LL:\n";
    while(true){
        int value;
        cin>>value;
        if(value==-1)
        break;
        else{
            node*newnode= new node{value};
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
    node*temp=head;
    int c=0;
    cout<<"LL:";
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        c++;
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    int target;
    cout<<"Enter target:";
    cin>>target;
    temp=head;
    int current_position=0;
    while(temp!=nullptr){
        if(temp->data==target){
        cout<<"Target found at: "<<current_position;
        break;}
        else{
            current_position++;
            temp=temp->next;
        }
    }
    if(temp==nullptr)
    cout<<" target not found";
    return 0;
}
