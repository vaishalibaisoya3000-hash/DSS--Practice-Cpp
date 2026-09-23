#include <iostream>
using namespace std;
int rev;
int reverse(int m,int Rev=0){
    if(m==0) return Rev;
    else{
    return (reverse(m/10,(m%10)+Rev*10));
    }
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}