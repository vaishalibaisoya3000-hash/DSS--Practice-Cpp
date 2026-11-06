#include <stdio.h>
int main() {
    int n,i,c;
    printf("enter size");
    scanf("%d",&n);
    int a[n];
    printf("enter elements");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    if(n%10!=0) {
        n=n-1;}
for(i=0;i<n;i=i+2) {
    c=a[i];
    a[i]=a[i+1];
    a[i+1]=c;
}
printf("swapped array :\n " );
n=n+1;
for(i=0;i<n;i++) {
    printf("%d",a[i]);
}
return 0;
}
