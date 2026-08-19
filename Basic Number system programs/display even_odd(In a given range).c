#include <stdio.h>

int main (){
    int r1,r2,x;
    printf("enter range r1=");
    scanf("%d",&r1);
    x=r1;
    printf("  r2=");
    scanf("%d",&r2);
    for( ;r1<=r2;r1++) {
        if(r1%2==0) {
            printf("%d\n",r1);
        }
    }
    for( ;x<=r2;x++) {
        if(x%2==1) {
            printf("%d\n",x);
        }
    }
    return 0;
    }