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
    for(i=0;i<n-1;i++) {
        if(arr[i]>arr[i+1]) {
            arr[i+1]= arr[i];
        }
    }
    printf("the largest element is : %d",arr[i]);
    return 0;
}