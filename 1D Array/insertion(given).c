#include <stdio.h>

int main() {
    int n,i;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n],pos;
    printf("enter the elements :\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter position");
    scanf("%d",&pos);
    for(i=n;i>=pos-1;i--) {
        arr[i+1]=arr[i];
    }
    printf("enter the isnserted value");
    scanf("%d",&arr[pos-1]);
    for(i=0;i<=n;i++) {
        printf("%d",arr[i]);
    }
    return 0;
}