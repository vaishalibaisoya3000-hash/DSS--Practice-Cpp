#include <iostream>
using namespace std;


int main() {
    int N;
    cout<<"enter n:";
    cin >>N;
    int i,j,k;
    int arr[N];
    cout<<"enter elements:\n";
    for (i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<"|(left - right) sum| of each elements:\n";
    for(i=0;i<N;i++){
    int sum_left=0,sum_right=0,sum=0;
        for(j=0;j<i;j++){
            sum_left=sum_left+arr[j];
        }
        for(k=i+1;k<N;k++){
            sum_right=sum_right+arr[k];
        }
        sum=sum_left-sum_right;
        if(sum<0){
            sum=-sum;
        }
        cout<<sum<<" ";
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
