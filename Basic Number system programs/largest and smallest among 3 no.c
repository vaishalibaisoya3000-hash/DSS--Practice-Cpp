#include <stdio.h>
int main() {
    int n1,n2,n3;
    printf("enter the 3 no.s :");
    scanf("%d %d %d",&n1 ,&n2, &n3);
    if(n1>n2) {
        if(n1>n3) {
            printf("n1=%d is greatest\n",n1);
            if(n2>n3){
                printf("n3=%d is the smallest",n3);
            }else{
                printf("n2=%d is the smallest",n2);
            }
        }else{
            printf("n3=%d is the greatest\n",n3);
            printf("n2=%d is the smallest");
        }
    }else if(n2>n3) {
        printf("n2=%d is the greatest\n",n2);
        if(n3>n1){
            printf("n1=%d is the smallest",n1);
        }else {
            printf("n3=%d is the smallest",n3);
        }
    }else{
        printf("n3=%d is the greatest\n",n3);
        printf("n1=%d is the smallest",n1);
    }
    return 0;


}