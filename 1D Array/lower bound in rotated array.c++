#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0,high=n-1,mid,target,c=-1;
    cout<<"enter target=";
    cin>>target;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]>=target){
            if (c == -1 || arr[mid] < arr[c])
            c=mid;
        }

        if(arr[low]<=arr[mid]){
            if(target>=arr[low] && target<=arr[mid])
            high=mid-1;
            else
            low=mid+1;
        }else{
            if(target>arr[mid] && target<=arr[high])
            low=mid+1;
            else
            high=mid-1;
        }
    }
    if(c!=-1)
    cout<<"\nlower bound="<<arr[c];
    else
    cout<<"no lower bound as no value >= target";
return 0;
}