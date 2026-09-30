#include <iostream>
using namespace std;
void input(int n,int nums[],int i=0){
    if(i==n) return;
    cin>>nums[i];
    input(n,nums,i+1);
}
int sum_arr(int n,int nums[],int sum=0,int i=0){
    if(i==n) return sum;
    sum_arr(n,nums,sum+nums[i],i+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    input(n,arr);
    cout<<sum_arr(n,arr);
    return 0;
}