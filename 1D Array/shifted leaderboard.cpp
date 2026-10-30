#include <iostream>
using namespace std;

int main() {
    int n,i,drop=0;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"\nenter the elements :\n";
    for(i=0;i<n;i++) {
        cin>>arr[i];
    }
    int times;
    if(n!=1){
    for(i=0;i<n-1;i++) {
        if(arr[i]>arr[i+1]){
            drop++;
            times=i;
        }

    }}
    if(drop==1){
        if(arr[0]>=arr[n-1]){
        cout<<"shifted "<<n-times-1<<" times";
        }else {
        cout<<"not a shifted leaderboard";
        }
    }else if(drop==0){
        cout<<"shifted leaderboard 0 or "<<n<<" times";
    }else{
    cout<<"not shifted leaderboard";
    }
    return 0;
}