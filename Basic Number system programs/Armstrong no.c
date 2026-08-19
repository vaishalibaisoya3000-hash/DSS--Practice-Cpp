#include <stdio.h>
int main() {
    int n,rem,i,c=0,power,sum=0,org,og;
    printf("enter n=");
    scanf("%d",&n);
    org=n;
    og=n;
    while(n>0) {
        rem=n%10;
        c++;
        n=n/10;
    }
    while(org>0) {
        rem=org%10;
        power=1;
        for(i=1;i<=c;i++) {
            power=power*rem;
        }
        sum=sum+power;
        org=org/10;
    }
    if(sum==og){
    printf("%d is an armstrong no.",og);
}else{
    printf("%d is not an armstrong no.",og);
}
return 0;
}