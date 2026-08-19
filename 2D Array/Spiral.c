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
    int spiral[m*n];
    int k=0;
    int top=0,bottom=m-1,left=0,right=n-1;

    while(left<=right && top<=bottom){
        for(j=left;j<=right;j++){
            spiral[k]=arr[top][j];
            k++;
        }
        top++;
        for(i=top;i<=bottom;i++){
            spiral[k]=arr[i][right];
            k++;
        }
        right--;
        for(j=right;j>=left;j--){
            spiral[k]=arr[bottom][j];
            k++;
        }
        bottom--;
        for(i=bottom;i>=top;i--){
            spiral[k]=arr[i][left];
            k++;
        }
        left++;
    }
    printf("spiral matrix:");
    for(k=0;k<m*n;k++){
        printf("%d ",spiral[k]);
    }
    return 0;
}

