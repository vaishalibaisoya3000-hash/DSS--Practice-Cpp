#include <iostream>
using namespace std;
#include <stack>
int main() {
    int n;
    cin>>n;
    int arr[n];
    int j=0;
    for(j=0;j<n;j++){
        cin>>arr[j];
    }
    std::stack<int> st;
    j=0;
    while(j<n){
        st.push(arr[j]);
        j++;
    }
    for(j=0;j<n;j++){
        arr[j]=st.top();
        st.pop();
    }
    j=0;
    for(j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}