#include<iostream>
using namespace std;

void input(int n, int nums[],int i=0){
    if(i==n) return;
    cin>>nums[i];
    input(n,nums,i+1);
}

void quick_sort(int nums[] ,int low ,int high){
    if(low>=high) return;

    int pivot=nums[low];
    int i=low;
    int j=high;

    while(i<j){
        while(nums[j]>pivot && i<j){
            j--;
        }
        while(nums[i]<=pivot && i<j){
            i++;
        }
        if(i<j)
        swap(nums[i], nums[j]);
    }
    
    swap(nums[low],nums[j]);

    quick_sort(nums ,low ,j-1);
    quick_sort(nums , j+1 , high);
}

int main() {
    int n;
    cin>>n;
    cout<<endl;

    int arr[n];
    input(n,arr);
    cout<<endl;

    quick_sort(arr ,0 ,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}