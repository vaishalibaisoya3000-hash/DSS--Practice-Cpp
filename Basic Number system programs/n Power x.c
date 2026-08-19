#include <stdio.h>
int main() {
    int n,x,power=1;
    printf("enter x and n:");
    scanf("%d %d",&x,&n);
    for(;n>0;n--){
        power=power*x;
    }
    printf("n power x =%d",power);
    return 0;
}