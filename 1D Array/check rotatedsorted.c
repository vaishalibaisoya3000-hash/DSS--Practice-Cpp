#include <stdio.h>

int main() {
    int n,i,drop=0;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    if(n!=1){
    for(i=0;i<n-1;i++) {
        if(arr[i]>arr[i+1])
            drop++;
    }}
    if(drop==1){
        if(arr[0]>arr[n-1]){
        printf("array is rotated sorted");
        }else {
        printf("array is not sorted");
        }
    }else if(drop==0){
        printf("sorted");
    }else{
    printf("not sorted");
    }
    
    return 0;
}