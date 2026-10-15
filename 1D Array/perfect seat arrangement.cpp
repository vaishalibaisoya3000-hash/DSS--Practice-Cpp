#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    cout<<"enter sorted roll no.:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int roll;
    cout<<"\nenter new student roll no.:";
    cin>>roll;
    int low=0,high=n-1,mid,index=mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]>=roll){
               index=mid;
               high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<"\nnew roll no. will be at:"<<index;
    return 0;
}