#include <iostream>
using namespace std;
struct node{
    int val;
    node*next;
};
int main() {
    int data;
    cout<<"enter data:\n";
    node*top=NULL;
    while(true){
        cin>>data;
        if(data==-1) break;
        else{
        node*newnode=new node{data,NULL};
        newnode->next=top;
        top=newnode;
        }
    }

    cout<<"LL:\n";
    node*temp=top;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";

    while(true){
        cout<<"\n---MENU---\n";
        cout<<"1.push\n2.pop\n3.peek\n4.isempty\n5.isfull\n6.exit\n";
        int choice;
        cout<<"enter choice:";
        cin>>choice;
        cout<<endl;
        if(choice==6){
            cout<<"exiting program\n";
            break;
        }
        else{
        switch(choice){
            case 1:
            cout<<"enter value=";
            int value;
            cin>>value;
            node*noder=new node{value,NULL};
            if(noder==NULL)    cout<<"stack overflow\n";
            else {
            noder->next=top;
            top=noder;
            }
            break;

            case 2:
            if(top!=NULL){
                node*del;
                del=top;
                top=top->next;
                delete del;
            }
            else    cout<<"stack underflow\n";
            break;

            case 3:{
            if(top!=NULL)   cout<<"peek value:"<<top->val;
            else    cout<<"stack underflow\n";
            break;

            case 4:
            if(top==NULL)   cout<<"true";
            else    cout<<"false";
            break;

            case 5:
            node*tempo=new node{0,NULL};
            if(tempo==NULL)    cout<<"true";
            else    cout<<"false";
            delete tempo;
            cout<<endl;
            break;
        }
        if(choice==1 || choice==2){
            cout<<"updated stack:\n";
            temp=top;
            while(temp!=NULL){
                cout<<temp->val<<"->";
                temp=temp->next;            
            }
            cout<<"NULL\n";
        }
    }
}
}
    return 0;
}