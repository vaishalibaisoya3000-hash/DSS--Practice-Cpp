#include<iostream>
#include <vector>
#include <string>
using namespace std;

void input(int n, vector<string> &nums,  int i=0){
    if(i==n) return;
    cin>>nums[i];
    input(n,nums,i+1);
}

void subset(int n, const vector<string> &nums, string ans, int &c, int sum, int k, int i=0){
    if(i==n) {
        if(sum==k){
        cout<<"["<< ans <<"]";
        c++;
        }
        return;
    }
    subset(n, nums, ans+nums[i]+" ", c, sum + stoi(nums[i]), k, i+1); //include
    subset(n, nums, ans, c, sum, k, i+1);  //exclude
}

int main() {
    cout<<"enter size:";
    int n;
    cin>>n;
    cout<<endl;

    cout<<"enter data:\n";
    vector<string> arr(n);
    input(n,arr);
    cout<<endl;

    string ans = "";
    int c=0;

    cout<<"enter the targeted sum : ";
    int k;
    cin>>k;
    cout<<endl;
    int sum=0;

    cout<<"the subsequences havind sum= "<< k <<" : ";
    subset(n, arr, ans, c, sum, k, 0);
    cout<<endl;
    cout<<"the total subsequences of sum "<< k <<" is :"<< c <<endl;

    return 0;
}