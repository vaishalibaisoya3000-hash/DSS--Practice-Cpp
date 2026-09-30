#include <iostream>
using namespace std;
void input(int m,int nums[],int i=0){
    if(i==m) return;
    cin>>nums[i];
    input(m,nums,i+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    input(n,arr);
    return 0;
}