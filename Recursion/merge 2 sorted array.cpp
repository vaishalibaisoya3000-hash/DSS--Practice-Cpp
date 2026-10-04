#include <iostream>
using namespace std;
void merge(int n,int m,int num1[],int num2[],int ans[],int i=0,int j=0,int k=0){
    if(i==n && j==m) return;
    if(i<n && j<n){
        if(num1[i]<=num2[j]){
            ans[k]=num1[i];
            i++;
        }
        else{ 
            ans[k]=num2[j];
            j++;
        }
    }
    else if(i<n){
        ans[k]=num1[i];
        i++;
    }   
    else{
        ans[k]=num2[j];
        j++;
    }
    cout<<ans[k]<<" ";
    merge(n,m,num1,num2,ans,i,j,k+1);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<endl;
    int m;
    cin>>m;
    cout<<endl;
    int arr2[m];
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    cout<<endl;
    int ans[n+m];
    merge(n,m,arr1,arr2,ans);
    return 0;
}

