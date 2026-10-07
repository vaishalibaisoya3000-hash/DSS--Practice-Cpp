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

node* buildtree(int& count_total, int& count_leaf, int& sum_total, int& sum_leaf, int& count_1_child_only, int& count_2_child_only){
    int value;
    cin>>value;

    if(value==-1)  return nullptr;

    node* newnode= new node(value);
    count_total+=1;
    sum_total+=newnode->data;

    cout<<"\nleft of "<<value<<" ?\n";
    newnode->left=buildtree(count_total, count_leaf, sum_total, sum_leaf,count_1_child_only, count_2_child_only);

    cout<<"\nright of "<<value<<" ?\n";
    newnode->right = buildtree(count_total, count_leaf, sum_total, sum_leaf, count_1_child_only, count_2_child_only);

    if(newnode->left == NULL && newnode->right == NULL) {
        count_leaf+=1;
        sum_leaf+=newnode->data;
    }
    if( (newnode->left==NULL && newnode->right!=NULL) || (newnode->left!=NULL && newnode->right==NULL) ) {
        count_1_child_only+=1;
    }
    if(newnode->left!= NULL && newnode->right!= NULL) {
        count_2_child_only+=1;
    }

    return newnode;
}

int main() {
    cout<<"enter -1 to stop:\n";

    int count_total=0;
    int count_leaf=0;
    int sum_total=0;
    int sum_leaf=0;
    int count_1_child_only=0;
    int count_2_child_only=0;


    node*root = buildtree(count_total, count_leaf, sum_total, sum_leaf, count_1_child_only, count_2_child_only);

    cout<<"total nodes = "<<count_total<<endl;
    cout<<"total leaves = "<<count_leaf<<endl;
    cout<<"total sum = "<<sum_total<<endl;
    cout<<"leaf sum = "<<sum_leaf<<endl;
    cout<<"total nodes having only 1 child = "<<count_1_child_only<<endl;
    cout<<"total nodes having only 2 child = "<<count_2_child_only<<endl;

    return 0;
}