#include <stdio.h>
int main() {
    int n,rem,sum=0,product=1;
    printf("enter n=");
    scanf("%d",&n);
    int m=n;
    while(n>0) {
        rem=n%10;
        sum=sum+rem;
        product=product*rem;
        n=n/10;
    }
    if(sum==product)
    printf("%d is a spy no.",m);
    else
    printf("%d is not a spy no.");
    return 0;
}