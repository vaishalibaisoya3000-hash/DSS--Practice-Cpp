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
    int target,found=0;
    printf("enter target:");
    scanf("%d",&target);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==target){
            printf("target found at row=%d , column=%d",i,j);
            found=1;
            break;
            }}}
    if(found==0){
        printf("target not found");
    }        
    return 0;
}