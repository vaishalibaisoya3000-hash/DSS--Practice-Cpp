#include<iostream>
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

node* buildtree(){
    int value;
    cin>>value;

    if(value==-1) return nullptr;

    node* newnode= new node(value);

    cout<<"\nleft of "<<value<<" ?\n";
    newnode->left=buildtree();

    cout<<"\nright of "<<value<<" ?\n";
    newnode->right = buildtree();

    return newnode;
}
void search(node*root, int key){
    if(root==NULL) return;
    
    if(root==key)
}

int main() {
    cout<<"enter -1 to stop:\n";

    node*root = buildtree();

    int key;
    cin>>key;

    search (root, key);

    return 0;
}