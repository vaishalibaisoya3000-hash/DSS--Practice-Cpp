#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n],i,j;
    cout<<"enter elements:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"by using 3 loops:\n";
    int sum_left,sum_right,value1=-1;
    for(i=0;i<n;i++){
        sum_left=0;
        sum_right=0;
        for(j=i-1;j>=0;j--){
            sum_left=sum_left+arr[j];
        }
        for(j=i+1;j<n;j++){
            sum_right=sum_right+arr[j];
        }
        if(sum_left==sum_right){
           value1=i;
           break;
        }
    }
    cout<<"the support will be at:";
    cout<<value1;
    cout<<endl;


    cout<<"by using only 2 loops:\n";
    int total_sum=0,value2=-1;
    for(i=0;i<n;i++){
        total_sum +=arr[i];
    }
    sum_left=0;
    for(i=0;i<n;i++){
        if(sum_left==total_sum - sum_left-arr[i]){
            value2=i;
        }
        sum_left += arr[i];
    }
    cout<<"the support will be at:";
    cout<<value2;
    return 0;
}
