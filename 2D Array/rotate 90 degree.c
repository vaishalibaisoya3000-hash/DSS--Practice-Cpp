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
    int arrT[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arrT[i][j]=arr[j][i];
        }
    }
    int arr901[n][m];
    int c=n;
    printf("after rotated by 90 degree(Anti.Cw):\n");
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr901[i][j]=arrT[n-i-1][j];
            printf("%d ",arr901[i][j]);
        }
        printf("\n");
    }
    int arr902[n][m];
    printf("\nafter rotated by 90 degree(Cw):\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr902[i][j]=arrT[i][m-1-j];
            printf("%d ",arr902[i][j]);
        }
        printf("\n");
    }
    int arr903[n][m];
    printf("\nmethod 2:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr903[i][j]=arr[m-1-j][i];
            printf("%d ",arr903[i][j]);
        }
        printf("\n");
    }
    return 0;
}
