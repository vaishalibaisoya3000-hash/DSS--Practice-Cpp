#include <stdio.h>
 int main() {
    int n,rem,sum=0;
    printf("enter n=");
    scanf("%d",&n);
    int m=n;
    while(m>0){
        rem=m%10;
        sum=sum*10+rem;
        m=m/10;
    }
    if(sum==n) {
        printf("%d is a palindrome no.",n);
    }else{
        printf("%d is not a paindrome no.",n);
    }
    return 0;
 }