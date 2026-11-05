#include <stdio.h>

int main() {
    int n,i;
    printf("enter size of array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int temp=arr[n-1];
    for(i=n-1;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}