#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n=";
    cin>>n;
    int arr[n],i;
    cout<<"enter elements:\n";
    for(i=0;i<n;i++){
        cin>>arr[i] ;
    }
    int target;
    cout<<"enter target=";
    cin>>target;
    int low=0,high=n-1;
    int first=-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            first= mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    int last=-1;
    low=0;high=n-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            last= mid;
            low= mid +1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout<<"first occurance: "<<first<<"\n"<<"last occurance: "<<last;

    return 0;
}
