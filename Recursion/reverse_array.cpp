#include <iostream>
using namespace std;
void input(int m,int nums[],int i=0){
    if(i==m) return;
    cin>>nums[i];
    input(m,nums,i+1);
}
void reverse_arr(int m,int rev[],int i=0){
    if(i==m) return ;
    reverse_arr(m,rev,i+1);
    cout<<rev[i]<<" ";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    input(n,arr);
    reverse_arr(n,arr);
    return 0;
}