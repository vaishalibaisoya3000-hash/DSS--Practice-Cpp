#include <stdio.h>


int main() {
    int n;
    printf("enter n=");
    scanf("%d",&n);
    if(n%100==0){
        if(n%400==0){
        printf("n is a leapyear");
    }} else if (n%4==0) {
        printf("n is a leapyear");
    } else {
        printf("n is not a leapyear");
    }
    return 0;
}