#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    int data;
    cout<<"enter data:\n";
    int m;
    int top=-1;
    for(m=0;m<n;m++){
        cin>>data;
        if(data!=-1)
        arr[m]=data;
        else break;
    }
    top=m-1;
    cout<<"stack:\n";
    for(int i=top;i>=0;i--){
        cout<<arr[i];
    }
    cout<<endl;

    while(true){
    cout<<"---MENU---\n";
    cout<<"1.push\n2.pop\n3.peek\n4.isempty\n5.isfull\n6.Exit";
    int choice;
    cout<<"\nenter your choice:"; 
    cin>>choice;
    if(choice==6){
        cout<<"Exiting program...\n";
        break;
    }
    switch(choice){
        case 1:{
        if(top==n-1)
        cout<<"stack overflow,try again\n";
        else{
        int val;
        cout<<"enter value:";
        cin>>val;
        top++;
        arr[top]=val;
        }
        break;
        }

        case 2:{
        if(top<0)
        cout<<"stack underflow, try again\n";
        else
        top--;
        break;
        }

        case 3:{
        if(top<0)
        cout<<"stack underflow, try again\n";
        else
        cout<<"peek value:"<<arr[top]<<endl;
        break;
        }

        case 4:{
        if(top<0) cout<<"True";
        else cout<<"False";
        cout<<endl;
        break;
        }

        case 5:
        if(top==n-1) cout<<"true";
        else cout<<"False";
        break;

        default:
        cout<<"Invalid choice\n";
        break;
    }
    if(choice==1 || choice==2){
    cout<<"\nfinal stack:\n";
    if(top<0) cout <<"empty\n";
    else{
    for(int i=top;i>=0;i--){
        cout<<arr[i];
    }
    cout<<endl;
    }
    }
    }
    return 0;
}
