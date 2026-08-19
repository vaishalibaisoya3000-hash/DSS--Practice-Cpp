#include <stdio.h>
int main() {
    int n,i;
    printf("enter size");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements");
    for(i=0;i<n;i++) {
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++) {
    arr[i]=arr[i] +2;
}
printf("incremented array:");
for(i=0;i<n;i++) {
    printf("%d",arr[i]);
}
return 0;
}