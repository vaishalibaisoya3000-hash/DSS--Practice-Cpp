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
    for(i=0;i<n;i++) {
sum=sum+arr[i];
    }
    sum=sum/(n);
    printf("average=%d",sum);
    printf("new array:\n");
    for(i=0;i<n;i++) {
        if(arr[i]>sum) {
            printf("%d",arr[i]);
        }
    }
    return 0;
}