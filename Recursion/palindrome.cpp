#include <iostream>
using namespace std;
int Rev(int n,int rev=0){
    if(n==0) return rev;
    Rev(n/10,rev*10+n%10);
}
int main(){
    int n;
    cin>>n;

    if(n==Rev(n)) cout<<n<<" is a palindrome no.";
    else cout<<n<<" is not a palindrome no.";

    return 0;
}