#include<iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int value){
        data=value;
        left=nullptr;
        right=nullptr;
    }
};

node* buildtree() {
    int value;
    cin>>value;

    if(value==-1) return nullptr;

    node* newnode = new node(value);

    cout<<"left ("<<value<<") = ";
    newnode->left = buildtree();

    cout<<"right ("<<value<<") = ";
    newnode->right = buildtree();

    return newnode;
}

void print_post_order(node* root) {
    if(root==nullptr)  return;

    print_post_order (root->left);
    print_post_order(root->right);

    cout<<root->data<<" ";

}

int main() {
    cout<<"enter -1 to stop:\n";

    node* root = buildtree();

    cout<<"creation finish\n";

    print_post_order(root);

    return 0;
}