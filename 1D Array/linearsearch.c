#include <stdio.h>

int main() {
    int n,i,key,c=0;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements :\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter key=");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            c=1;
            printf("key(%d) is found at %d",key,i);
        }
    }
    if(c==0)
    printf("key is not found");
    return 0;
}