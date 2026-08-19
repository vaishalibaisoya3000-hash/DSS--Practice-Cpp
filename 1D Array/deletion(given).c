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
    for(i=pos-1;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++) {
        printf("%d",arr[i]);
    }
    return 0;
}