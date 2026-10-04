#include <iostream>
using namespace std;
void input(int m,int nums[],int i=0){
    if(i==m) return;
    cin>>nums[i];
    input(m,nums,i+1);
}
int search(int n,int nums[],int key,int i=0){
    if (nums[i]==key) return i;
    else if(i==n) return -1;
    else search(n,nums,key,i+1);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;

    int arr[n];
    input(n,arr);
    cout<<endl;

    int target;
    cin>>target;
    cout<<endl;

    cout<<search(n,arr,target);

    return 0;
}