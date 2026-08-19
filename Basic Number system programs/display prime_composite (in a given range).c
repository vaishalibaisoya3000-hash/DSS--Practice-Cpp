#include <stdio.h>
int main() {
    int r1,r2,i,n;
    printf("Enter range: r1 and r2 =");
    scanf("%d %d",&r1,&r2);
    printf("composite no.\n");
    for(n=r1;n<=r2;n++) {
    for(i=2;i<n/2;i++) {
        if(n%i==0) {
            printf("%d \n",n);
            break;
        }
    }
} printf("Prime no. \n");
for(n=r1;n<=r2;n++) {
    int c=0;
    for(i=2;i<n/2;i++) {
        if(n%i==0) {
            c=1;
            break;
        }}
        if(c==0) {
printf("%d \n",n);
    }
}
return 0; 
}