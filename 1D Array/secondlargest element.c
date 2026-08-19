#include <stdio.h>

int main() {
    int n=8,i;
    int arr[8]={2,5,8,6,9,7,12,13};
    int largest,secondlargest;
    largest=arr[0],secondlargest=arr[0];
    for(i=0;i<n;i++) {
        if(largest<arr[i]) {
            secondlargest=largest;
            largest=arr[i];
        }
         else if(largest!=arr[i] && secondlargest<arr[i]) {
            secondlargest=arr[i];
        }
    }
    printf("%d",secondlargest);
}