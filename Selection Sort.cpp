#include <iostream>
using namespace std;


int main() {
    int n;
    cout<<"enter n:";
    cin >>n;
    int i,j;
    int arr[n];
    cout<<"enter elements:\n";
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    int c;
    int min;
    for(i=0;i<n-1;i++){
        min=i;
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
        min=j;
        }
    }
    c=arr[min];
    arr[min]=arr[i];
    arr[i]=c;
    }
    cout<<"after:\n";
    for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}