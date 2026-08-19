#include <iostream>
using namespace std;


int main() {
    int n;
    cout<<"enter n:";
    cin >>n;
    int i,j;
    int arr[n],c;
    cout<<"enter elements:\n";
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                c=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=c;
            }
        }
    }
    cout<<"after:\n";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}