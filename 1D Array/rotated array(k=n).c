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
    int temp[k];
    int m=n-k;
    for(i=0;i<k && m<n;i++,m++){
        temp[i]=arr[m];
    }
    for(i=n-1;i-k>=0;i--){
        arr[i]=arr[i-k];
    }
    for(i=0;i<k;i++){
        arr[i]=temp[i];
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}