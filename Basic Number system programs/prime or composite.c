#include <stdio.h>

int main() {
    int n,c,i;
    printf("enter the no. n=\n");
    scanf("%d",&n);
    if(n==1) {
        printf("neither prime nor composite");
        return 0;
    }
    for(i=2;i<n/2;i++){
        if (n%i==0) {
            c=0;
        printf("n is composite");
        return 0;   
        }else if(n%i!=0){
            c=1;
        }
    }
    if(c==1) {
        printf("n is prime");
    }
    return 0;
}