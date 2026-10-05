#include <iostream>
using namespace std;

void input(int n,int arr[],int i=0){
    if(i==n) return ;
    cin>>arr[i];
    input(n,arr,i+1);
}

void merge(int nums[], int left, int mid, int right, int high, int temp[], int k=0){
    if(left>mid && right>high) return;
    
    if(left>mid)  {
        temp[k]=nums[right];
        merge(nums, left, mid, right+1, high, temp, k+1);
    }
    else if(right>high)  {
        temp[k]=nums[left];
        merge(nums, left+1, mid, right, high, temp, k+1);
    }
    else if(nums[left]<=nums[right])  {
        temp[k]=nums[left];
        merge(nums, left+1, mid, right, high, temp, k+1);
    }
    else {
        temp[k]=nums[right];
        merge(nums, left, mid, right+1, high, temp, k+1);
    }

}

void merge_sort(int nums[], int low, int high){
    if(low>=high) return;

    int mid=low+(high-low)/2;


    merge_sort(nums, low, mid);
    merge_sort(nums, mid+1, high);

    int temp[high-low+1];
    merge(nums, low, mid, mid+1, high, temp);

    for(int i=low ; i<=high ; i++){
        nums[i]=temp[i-low];
    }

}

int main(){
    int n;
    cin>>n;
    cout<<endl;

    int arr[n];
    input(n,arr);
    cout<<endl;

    merge_sort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}