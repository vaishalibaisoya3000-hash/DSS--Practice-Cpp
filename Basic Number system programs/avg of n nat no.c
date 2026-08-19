#include <stdio.h>
int main() {
    int r1,r2,n,sum=0;
    printf("enter r1 and r2 \n");
    scanf("%d %d",&r1,&r2);
    for(n=r1;n<=r2;n++) {
        sum=sum+n;
    }
    double avg=(double)sum/(r2-r1+1);
    printf("avg of n natural no. from %d to %d = %f",r1,r2,avg);
    return 0;
}