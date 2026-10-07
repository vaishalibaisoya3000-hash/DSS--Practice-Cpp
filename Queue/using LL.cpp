#include <iostream>
using namespace std;
struct node{
    int val;
    node*next;
};
int main() {
    node*front=NULL;
    node*rear=NULL;
    int data;
    cout<<"enter data and -1 to stop:\n";
    while(true){
        cin>>data;
        if(data==-1) break;
        node*newnode=new node{data,NULL};
        if(front==NULL){
            front=newnode;
            rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }
    }
    cout<<"queue:\n"<<"front->";
    node*temp=front;
    while(temp!=NULL){
        cout<<temp->val;
        temp=temp->next;
    }
    cout<<"<-rear";
    int choice;
    while(true){
       cout<<"\n---MENU---\n";
       cout<<"1.enqueue\n2.dequeue\n3.get_front\n4.get_rear\n5.isfull\n6.isempty\n7.exit\n";
       cin>>choice;
       if(choice==7){
        cout<<"exiting program\n";
        break;
       }
       else{
        switch(choice){
            case 1:{
            int value;
            cout<<"enter value to add at rear=";
            cin>>value;
            node*insert=new node{value,NULL};
            if(insert!=NULL){
                if(front==NULL){
                    front=insert;
                    rear=insert;
                }
                else{
                    rear->next=insert;
                     rear=insert;
                }
            }
            else{
                cout<<"queue overflow\n";
            }
            break;
        }

            case 2:{
            node*del=front;
            if(front==NULL){
                cout<<"queue underflow\n";
            }
            else{
                front=front->next;
                delete del;
            }
            break;
        }

            case 3:{
            if(front!=NULL){
                cout<<"front value is "<<front->val<<endl;
            }
            else{
                cout<<"queue underflow\n";
            }
            break;
        }

            case 4:{
            if(front!=NULL){
                cout<<"rear value is "<<rear->val<<endl;
            }
            else{
                cout<<"queue underflow\n";
            }
            break;
        }


            case 5:{
            temp=new node{0,NULL};
            if(temp==NULL){
                cout<<"true";
            }
            else{
                cout<<"false";
            }
            cout<<endl;
            delete temp;
            break;
        }

        case 6:{
            if(front==NULL){
                cout<<"true";
            }
            else{
                cout<<"false";
            }
            cout<<endl;
            break;
        }
        }
        if(choice==1 || choice==2){
            temp=front;
            cout<<"updated queue:\n";
            cout<<"front->";
            while(temp!=NULL){
                cout<<temp->val;
                temp=temp->next;
            }
            cout<<"<-rear\n";
        }
       }
    }
    return 0;

}