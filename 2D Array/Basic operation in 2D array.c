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
    printf("column major:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d  ",arr[j][i]);
        }
        printf("\n");
    }
    int total_sum=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            total_sum+=arr[i][j];
        }
    }
    printf("\ntotal sum= %d\n",total_sum);
    int sum1=0;
    for(i=0;i<m;i++){
        sum1=0;
        for(j=0;j<n;j++){
            sum1+=arr[i][j];
        }
        printf("sum of row(%d)=%d\n",i+1,sum1);
    }
     int sum2=0;
    for(i=0;i<m;i++){
        sum2=0;
        for(j=0;j<n;j++){
            sum2+=arr[j][i];
        }
        printf("sum of column(%d)=%d\n",i+1,sum2);
    }
    if(m==n) {
    int sumdia1=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
            sumdia1+=arr[i][j];
            }
        }
    }
    int sumdia2=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i+j==n-1){
            sumdia2+=arr[i][j];
            }
        }
    }
    int max=arr[0][0];
    printf("sum of diagonals 1=%d\n",sumdia1);
    printf("sum of diagonals 2=%d\n",sumdia2);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j || i+j==m-1){
               if(arr[i][j]>max){
                max=arr[i][j];
               }
            }
        }
    }
    printf("diagonal with maximum value= %d",max);
    }
    return 0;
}