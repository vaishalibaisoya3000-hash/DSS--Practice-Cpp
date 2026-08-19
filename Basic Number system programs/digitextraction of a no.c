#include <stdio.h>
int main() {
    int n,rem;
    printf("enter n=");
    scanf("%d",&n);
    printf("the digits are:\n");
    while(n>0) {
        rem=n%10;
        printf("%d\n",rem);
        n=n/10;
    }
    return 0;
}