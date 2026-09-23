#include <iostream>
using namespace std;
int sum_digit(int n,int sum=0){
    if(n==0) return sum;
    else{
        return sum_digit(n/10,n%10+sum);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<sum_digit(n);
    return 0;
}