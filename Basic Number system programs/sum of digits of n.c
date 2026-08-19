#include <stdio.h>
 
int main() {
    int n,sum=0,rem;
    printf("enter n=");
    scanf ("%d",&n);
    while(n>0) {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of digits of n :%d",sum);
    return 0;
}