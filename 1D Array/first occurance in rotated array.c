#include <stdio.h>

int main() {
    int n,i;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }


    int target;
    printf("enter target=");
    scanf(" %d",&target);

    int first_occurance=-1;
    int first=0,last=n-1;
    while(first<=last){
        int mid=first+(last-first)/2;
        if(arr[first]==arr[last] && arr[first]==target){
            first_occurance=first;
            break;
        }
        if(arr[mid]==target){
            first_occurance=mid;
            last=mid-1;
            continue;
        }
        if(arr[first]==arr[mid] && arr[mid]==arr[last]){
            first++;
            last--;
        }else if(arr[first]<=arr[mid]){
            if(target>=arr[first] && target<arr[mid]){
                last=mid-1;
            }else{
                first=mid+1;
            }
        }else{
            if(target>arr[mid] && target<=arr[last]){
                first=mid+1;
            }else{
                last=mid-1;
            }
        }
    }
    if(first_occurance!=-1){
        printf("first occurance of %d is at %d",target,first_occurance);
    }

    if(first_occurance==-1){
    printf("target not found");
    }
    return 0;
}