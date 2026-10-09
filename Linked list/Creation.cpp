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

int main() {
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
    int count=0;
    node* temp = head;
    cout<<"Linked List : ";
    while(temp!=nullptr){
        count++;
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"nullptr\n";
    cout<<"lenght of Linked List:"<<count;

    cout<<"\nMiddle Element:";
    temp=head;
    int middle_index=count/2;
    int current_position=0;
    while(current_position<middle_index){
        temp=temp->next;
        current_position++;
    }
    cout<<temp->data<<"  at Index:"<<middle_index;



    cout<<"\nHardcoded LL: ";
    node1*head1=new node1{10};
    head1->next1=new node1{20};
    head1->next1->next1=new node1{30};
    head1->next1->next1->next1=new node1{40};
    head1->next1->next1->next1->next1=new node1{50};
    int c=0;
    node1*temp1=head1;
    while(temp1!=nullptr){
        cout<<temp1->data1<<"->";
        c++;
        temp1=temp1->next1;
    }
    cout<<"nullptr"<<endl<<"Lenth of LL:"<<c;
    return 0;
}