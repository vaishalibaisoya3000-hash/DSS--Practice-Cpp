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
    printf("transpose of this matrix:\n");
    int arrT[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arrT[i][j]=arr[j][i];
            printf("%d ",arrT[i][j]);
        }
        printf("\n");
    }
    return 0;
}