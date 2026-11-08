#include <stdio.h>
int main() {
    int arr[6]={2,3,4,6,7,5};
    int i,largest=-1;
    for(i=0;i<6;i++) {
        if(largest<arr[i]) {
            largest=arr[i];
    }
    }
    printf("%d",largest);
    return 0;
}