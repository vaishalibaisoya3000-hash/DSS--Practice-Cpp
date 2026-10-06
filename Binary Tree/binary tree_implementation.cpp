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

void print(node* root){
    if(root==nullptr)  return;

    cout<<root->data<< " -> ";
    if(root->left!=NULL)  cout<<root->left->data<<" -> ";
    else cout<<"null -> ";
    if(root->right!=NULL) cout<<root->right->data<<endl;
    else cout<<"null"<<endl;

    print(root->left);
    print(root->right);

}

int main() {
    cout<<"enter -1 to stop:\n";
    node*root = buildtree();

    cout<< "\n---Tree creation finished---\n";

    print(root);

    return 0;
}