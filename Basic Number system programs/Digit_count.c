#include <stdio.h>

int main(){
    int n,count,rem;
    printf("enter n=");
    scanf("%d",&n);
    for(count=0;n>0;count++){
        rem=n%10;
        n=n/10;
    }
    printf("no. of digits in n =%d",count);
    return 0;
}