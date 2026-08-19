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
    int K;
    printf("enter no. of rotations=");
    scanf("%d",&K);
    int k=K%4;
    int a,b;
    if(k%2!=0){
        a=n;
        b=m;
    }else{
        a=m;
        b=n;
    }
    int arrR[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(k==0 || k==4){
                arrR[i][j]=arr[i][j];
            }else if(k==1){
                arrR[i][j]=arr[m-1-j][i];    
            }else if(k==2){
                arrR[i][j]=arr[m-1-i][n-1-j];    
            }else if(k==3){
                arrR[i][j]=arr[j][n-1-i];    
            }
        }
        printf("\n");
    }
    printf("new matrix rotated %d times:\n",K);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d ",arrR[i][j]);
        }
        printf("\n");
    }
    return 0;
}
