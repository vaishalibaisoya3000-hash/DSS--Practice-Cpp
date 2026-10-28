#include<iostream>
using namespace std;

struct node {
    int val;
    node* left;
    node* right;

    node(int v){
        val=v;
        left=nullptr;
        right=NULL;
    }
};

node* insert(node*root, int val){
    if(root==NULL)  return new node(val);

    if(val < root->val)
    root->left =insert(root->left,val);

    else if (val > root->val)
    root->right = insert(root->right,val);

    return root;
}

void display(node* root) {
    if(root == NULL) return;
    display (root->left);
    cout<< root->val <<"->";
    display (root->right);
}

int main() {
    node* root =NULL;
    int value;

    cout<<"enter data:";
    
    while(true){
        cin>>value;

        if(value==-1) break;

        root = insert(root, value);
    }

    cout<<"\nInorder : ";
    display(root);

    cout<<endl;

    return 0;
}