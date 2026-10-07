#include <iostream>
using namespace std;
int main(){
    cout<<"enter size=";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter data and -1 to stop:\n";
    int data;
    int front=-1,rear=-1;
    while(rear!=n-1){
        cin>>data;
        if(data==-1){
            break;
        }
        if(front==-1){
            rear++;
            front++;
            arr[front]=data;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }
    while(true){
        cout<<"\n---MENU---\n";
        cout<<"1.enqueue\n2.dequeue\n3.get_rear\n4.get_front\n5.isempty\n6.isfull\n7.exit\n";
        int choice;
        cout<<"enter choice:";
        cin>>choice;
        cout<<endl;
        if(choice==7){
            cout<<"exiting program\n";
            break;
        }
        
        switch(choice){
            case 1:{
            if(rear=n-1){
                cout<<"queue overflow\n";
            }
            else{
                int value;
                cout<<"enter value to add at rear=";
                cin>>value;
                cout<<endl;
                arr[rear+1]=value;
                rear++;
            }
            break;
        }

            case 2:{
            if(front==-1 || front==n){
                cout<<"queue underflow\n";
            }
            else{
                front++;
            }
            break;
        }

            case 3:{
            if(front==-1 || front==n){
                cout<<"queue underflow\n";
            }
            else{
                cout<<"rear element is="<<arr[rear];
            }
            break;
        }

            case 4:{
                if(front==-1 || front==n){
                    cout<<"queue underflow\n";
                }
                else{
                    cout<<"front element is:"<<arr[front];
                }
                break;
            }

            case 5:{
            if(front==-1 || front==n){
                cout<<"true";
            }
            else{
                cout<<"false";
            }
            cout<<endl;
            break;
        }

            case 6:{
            if(rear==n){
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
            cout<<"updated queue:\n";
            n=front;
            while(n<=rear){
                cout<<arr[n]<<"-";
                n++;
            }
        }
    }
    return 0;
    
}