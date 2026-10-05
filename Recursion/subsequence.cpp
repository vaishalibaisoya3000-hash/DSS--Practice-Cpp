#include<iostream>
#include <vector>
using namespace std;

void input(int n, vector<string> &nums,  int i=0){
    if(i==n) return;
    cin>>nums[i];
    input(n,nums,i+1);
}

void subset(int n, const vector<string> &nums, string ans, int &c, int i=0){
    if(i==n) {
        cout<<"["<< ans <<"]";
        c++;
        return;
    }
    subset(n, nums, ans+nums[i]+" ", c, i+1);
    subset(n, nums, ans, c, i+1);
}

int main() {
    int n;
    cin>>n;
    cout<<endl;

    vector<string> arr(n);
    input(n,arr);
    cout<<endl;

    string ans = "";
    int c=0;

    subset(n, arr, ans, c, 0);
    cout<<endl;

    cout<<c;

    return 0;
}