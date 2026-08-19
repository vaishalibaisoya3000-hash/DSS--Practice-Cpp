#include <stdio.h>

int main() {
    int n,i,j,k=0;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("enter the elements :\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n-1;i++) {
        int alreadyseen=0;
        int freq=0;
        for(j=0;j<i;j++) {
            if(arr1[i]==arr1[j]) {
            alreadyseen=1;
            break;
        }}
        if(alreadyseen==0) {
            for(j=i+1;j<n;j++) {
                if(arr1[i]==arr1[j])
                freq++;
            }
        }
        if(freq>0) {
            arr2[k]=arr1[i];
            k++;
        }
    }
    printf("the duplicate array:");
    for(i=0;i<k;i++) {
        printf("%d",arr2[i]);
    }
    return 0;
}
