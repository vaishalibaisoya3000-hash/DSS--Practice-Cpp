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
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
    cout<<"after:\n";
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}