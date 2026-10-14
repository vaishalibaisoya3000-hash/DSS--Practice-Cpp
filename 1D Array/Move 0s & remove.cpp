#include <iostream>
using namespace std;
int main(){
    cout<<"enter size:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter values:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int e=0;
    for(int f=0;f<n;f++){
        if(arr[f]!=0){
            arr[e]=arr[f];
            e++;
        }
    }
    int s=e;
    while(e<n){
        arr[e]=0;
        e++;
    }
    cout<<"updated array after shifting all 0s to the end:\n";
    for(e=0;e<n;e++){
        cout<<arr[e]<<" ";
    }
    cout<<"\nupdated array after removing those 0s:\n";
    for(e=0;e<s;e++){
        cout<<arr[e]<<" ";
    }
    return 0;
}
