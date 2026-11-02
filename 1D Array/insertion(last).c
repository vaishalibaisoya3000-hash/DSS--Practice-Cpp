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
    printf("enter the isnserted vallue");
    scanf("%d",&arr[n]);
    for(i=0;i<=n;i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
    }