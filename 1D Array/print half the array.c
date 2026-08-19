#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("enter size of array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("half array \n");
    for(i=0;i<(n+1)/2;i++) {
        printf("%d",arr[i]);
    }
    return 0;
}