#include <stdio.h>
int main() {
    int f1=0,f2=1,f3,range,i;
    printf("enter range=");
    scanf("%d",&range);
    printf("Fabonacci series:\n");
    printf("%d\n%d\n",f1,f2);
    for(i=3;i<=range;i++) {
        f3=f1+f2;
        printf("%d\n",f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}