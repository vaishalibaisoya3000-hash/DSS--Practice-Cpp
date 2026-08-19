 #include <stdio.h>
 int main() {
    int n,rem,l=-1,s=9,sl=-1,ss=9;
    printf("enter n :");
    scanf("%d",&n);
    while(n>0) {
        rem=n%10;
        if(rem>l){
            sl=l;
            l=rem;
        }else if(rem<l && rem>sl){
            sl=rem;
        }
        
        if(rem<s) {
            ss=s;
            s=rem;
        }else if(rem>s && rem<ss) {
            ss=rem;
        }
        n=n/10;
        }
    printf("largest and smallest digit =%d %d",l,s);
    printf(" secondlargest and secondsmallest digit=%d %d ",sl,ss);
    return 0;
}