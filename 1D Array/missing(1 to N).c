#include <stdio.h>
int main() {
    int n,i,N,j,found;
    
    printf("enter N :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n+1;i++){
        sum += i;
    }
    for(i=0;i<n;i++){
        sum -= arr[i];
    }
    printf("%d is missing",sum);
    return 0;
}

