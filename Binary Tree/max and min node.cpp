#include<iostream>
#include<climits>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int value) {
        data=value;
        left=nullptr;
        right=nullptr;
    }
};

node* buildtree(int& max, int& min){
    int value;
    cin>>value;

    if(value==-1) return nullptr;

    node* newnode= new node(value);
    if(newnode->data >  max) max=newnode->data;
    if(newnode->data < min)  min=newnode->data;

    cout<<"\nleft of "<<value<<" ?\n";
    newnode->left=buildtree(max, min);

    cout<<"\nright of "<<value<<" ?\n";
    newnode->right = buildtree(max, min);

    return newnode;
}

int main() {
    cout<<"enter -1 to stop:\n";

    int max = INT_MIN;
    int min = INT_MAX;
    node*root = buildtree(max, min);

    cout<<endl;
    cout<<"maximum element = "<<max<<endl;
    cout<<"minimum element = "<<min<<endl;

    return 0;
}