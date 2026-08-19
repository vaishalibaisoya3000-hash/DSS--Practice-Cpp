#include <iostream>
using namespace std;
int main() {
    long long X;
    cout<<"enter X=";
    cin>>X;
    long long low=0,high=X,mid,ans;
    while(low<=high){
        mid=low+(high-low)/2;
        if(mid*mid==X){
            ans=mid;
            break;
        }else if(mid*mid>X){
            high=mid-1;
        }else if(mid*mid<X){
            ans=mid;
            low=mid+1;
        }
    }
    cout<<"no. whose sq root<="<<X<<" is:"<<ans;
    return 0;
}
