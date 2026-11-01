#include <stdio.h>
int main() {
    int n,i,key,found=0;
    printf("enter n=");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter key=");
    scanf("%d",&key);
    int first=0,last=n-1,mid;
    while(first<=last){
        mid=first+(last-first)/2;
    if(arr[mid]==key){
        found=1;
        printf("key found at %d",mid);
        break;
    }
    else if(key>arr[mid]) {
        first=mid+1;
    } else if(key<arr[mid]) {
        last=mid-1;
    }
    }
    if(found==0){
        printf("key not found");
    }
return 0;
}
    