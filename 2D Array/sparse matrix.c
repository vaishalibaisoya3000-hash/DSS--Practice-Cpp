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
    int c=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==0)
            c++;
        }
    }
    int k=0;
    int sparse[m*n-c][3];
    if(c>(m*n)/2){
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(arr[i][j]!=0){
                   sparse[k][0]=arr[i][j];
                   sparse[k][1]=i;
                   sparse[k][2]=j;
                   k++;
                }
            }
        }
        for(i=0;i<m*n-c;i++){
            for(j=0;j<3;j++){
                printf("%d ",sparse[i][j]);
            }
            printf("\n");
        }
    }else{
        printf(" zeroes are less(%d out of %d), no sparse matrix \n",c,m*n);
    }
     return 0;   
    }