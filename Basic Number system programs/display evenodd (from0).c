#include <stdio.h>

int main() {
    int l,n,m;
    printf("enter last no.=");
    scanf("%d",&l);
    for(n=0;n<=l;n++){
        if(n%2==0){
        printf("%d \n",n);
    }}
    for(m=1;m<=l;m++) {
        if(m%2==1){
        printf("%d \n",m);
    }}
    return 0;
}