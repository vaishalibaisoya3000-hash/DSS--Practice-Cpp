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
    int key,c=0;
    printf("enter key=");
    scanf("%d",&key);
    int first=0,last=n-1;
    while(first<=last){
        int mid=(first+last)/2;
        if(key==arr[mid]){
        printf("key is found at %d",mid);
        c=1;
        break;
    }else if(key>arr[mid]){
        first=mid+1;
    } else if(key<arr[mid]){
        last=mid-1;
    }
}
    if(c==0){
    printf("key not found");
    }
    return 0;
}