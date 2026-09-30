#include <iostream>
using namespace std;
void print_array(int n,int nums[],int j=0){
    if(j==n) return;
    cout<<nums[j];
    print_array(n,nums,j+1);
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print_array(n,arr);
    return 0;
}