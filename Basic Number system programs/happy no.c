#include <stdio.h>
int main() {
    int n,rem,sum,org;
    printf("enter n=");
    scanf("%d",&n);
    org=n;
    while(n!=1 && n!=4){
        sum=0;
    while(n>0) {
        rem=n%10;
        sum=sum+(rem*rem);
        n=n/10;
    }
    n=sum;
}
    if(n==1){
    printf("%d is happy no.",org);
}
    if(n==4){
    printf("%d is not a happy no.",org);
}
    return 0;
}