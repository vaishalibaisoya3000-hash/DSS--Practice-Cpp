#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n:";
    cin >>n;
    int i;
    int arr[n];
    cout<<"enter elements:\n";
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0,high=n-1,mid,target,c=-1;
    cout<<"enter target=";
    cin>>target;

    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]>=target){
            c=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    if(c!=-1)
    cout<<"lower bound="<<arr[c];
    else 
    cout<<"no lower bound as no value >= target";


    int d=-1;
    low=0,high=n-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]>target){
            d=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(d!=-1)
    cout<<"\nupper bound="<<arr[d];
    else 
    cout<<"\nno upper bound as no value > target";

    return 0;
}
