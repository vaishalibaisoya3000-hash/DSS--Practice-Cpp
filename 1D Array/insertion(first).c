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
    for(i=n;i>=0;i--) {
        arr[i+1]=arr[i];
    }
    printf("enter the isnserted value");
    scanf("%d",&arr[0]);
    for(i=0;i<=n;i++) {
        printf("%d",arr[i]);
    }
    return 0;
    }