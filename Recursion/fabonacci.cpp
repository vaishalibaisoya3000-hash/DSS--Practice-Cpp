#include <iostream>
using namespace std;
void fab(int length, int first, int second){
    if(length==0) return;
    cout<<first<<" ";
    fab(length-1,second,first+second);
}
int main() {
    int n;
    cin>>n;
    fab(n,0,1);
    return 0;
}
