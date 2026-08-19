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
    int low=0,high=n-1,mid,first_occurance=-1,target;
    cout<<"enter target:";
    cin>>target;
    while(low<=high){
        mid=low+(high-low)/2;

        if(arr[low]==arr[high] && target==arr[low]){
            first_occurance=low;
            break;
        }

        if(arr[mid]==target){
            first_occurance=mid;
            high=mid-1;
            continue;
        }
        if(arr[mid]==arr[low] && arr[mid]==arr[high]){
            low++;
            high--;
        }
        else if(arr[low]<=arr[mid]){
            if(target<arr[mid] && target>=arr[low]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }else {
            if(target>arr[mid] && target<=arr[high]){
                low=mid+1;
            }else {
                high=mid-1;
            }
        }
    }
    cout<<"\nfirst occurance="<<first_occurance<<"\n";
    int idx=n-1;
    if(first_occurance!=-1){
        if(arr[(first_occurance+1)%n]==target){
            cout<<"second occurance="<<first_occurance+1;
        }else if(first_occurance==0 && target==arr[idx]){
            while(idx>1 && arr[idx]==target){
                idx--;
            }
            cout<<"\nsecond occurance="<<idx+1;
        }else{
            cout<<"no second occurance\n";
        }
    }
    else if(first_occurance==-1){
        cout<<"target not found";
    }


    return 0;
    }