#include <iostream>
using namespace std;
int binary(int num[],int key,int low,int high){
    if(low>high)return -1;   

    int mid=low+(high-low)/2;

    if(num[mid]==key) return mid;
    else if(num[mid]>key) high=mid-1;
    else low=mid+1;

    binary(num,key,low,high);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int target;
    cin>>target;
    cout<<endl;

    cout<<"target found at:"<<binary(arr,target,0,n-1);
    return 0;
}