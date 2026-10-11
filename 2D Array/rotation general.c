#include <stdio.h>
int main() {
    int m,n,i,j;
    printf("enter m=");
    scanf("%d",&m);
    printf("enter n=");
    scanf("%d",&n);
    int arr[m][n];
    printf("enter elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int k;
    printf("enter no. of rotations=");
    scanf("%d",&k);
    k=k%4;
    int size;
    if(m>=n){
        size=m;
    }else{
        size=n;
    }
    int arrR[size][size];
    int temp[size][size];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            temp[i][j]=arr[i][j];
        }
    }
    for(;k>0;k--){
    int c=m;
    m=n;
    n=c;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arrR[i][j]=temp[n-1-j][i];
        }}
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            temp[i][j]=arrR[i][j];
        }
    }
    }
    printf("new array rotated k times:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arrR[i][j]);
        }
        printf("\n");
    }
    return 0;
}
