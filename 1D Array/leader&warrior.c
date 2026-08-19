#include <stdio.h>
int main() {
    int n,i;
    printf("enter size=");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++) {
    scanf("%d",&arr[i]);
}
int max=arr[n-1];
printf("LEADERS ASSEMBLE:\n");
printf("%d  ",max);
for(i=n-2;i>=0;i--){
    if(arr[i]>max){
        max=arr[i];
        printf("%d  ",max);
    }
}
return 0;
}