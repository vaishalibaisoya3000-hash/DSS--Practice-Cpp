#include <stdio.h>
int main() {
    int arr[6]={2,3,4,6,7,5};
    int i,sum=0,product=1;
    for(i=0;i<6;i++) {
        if(i%2==0) {
            sum=sum+arr[i];
        } else {
            product=product*arr[i];
        }
    }
    printf("sum of even index terms=%d",sum);
    printf("product of odd index terms=%d",product);
    return 0;
}