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

void print_pre_order (node*root) {
    if(root == nullptr) return;

    cout<< root->data <<" ";
    print_pre_order (root->left);
    print_pre_order (root->right);
}

int main() {
    cout<<"enter -1 to stop\n";
    node* root = buildtree();

    cout<< "\n---Tree creation finished---\n";

    cout<<"pre-order traversal:\n";
    print_pre_order(root);
    cout<<endl;

    return 0; 
}