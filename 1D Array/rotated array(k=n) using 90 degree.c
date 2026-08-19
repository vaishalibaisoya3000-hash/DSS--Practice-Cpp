#include <stdio.h>

int main() {
    int n,i,k;
    printf("enter size of array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("how many rotation?");
    scanf("%d",&k);
    k=k%n;
    int temp[n];
    for(i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(i=0;i<n;i++){
        arr[i]=temp[i];
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}