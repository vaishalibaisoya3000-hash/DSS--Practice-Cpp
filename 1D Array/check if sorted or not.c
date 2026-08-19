#include <stdio.h>

int main() {
    int n,i,ascending=1,descending=1;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++) {
        if(arr[i]!=arr[i+1]) {
            if(arr[i]>arr[i+1])
            ascending=0;
            if(arr[i]<arr[i+1])
            descending=0;
        }
    }
    if(ascending==0 && descending==0)
    printf("array is unsorted");
    else
    printf("array is sorted");
    return 0;
}