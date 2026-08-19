#include <stdio.h>
int main() {
    int n,rem,fact,sum=0,i;
    printf("enter n=");
    scanf("%d",&n);
    int m=n;
    while(n>0) {
        fact=1;
        rem=n%10;
        for(i=1;i<=rem;i++) {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(m==sum)
    printf("%d is a strong no.",m);
    else
    printf("%d is not a strong no.",m);
    return 0;
}