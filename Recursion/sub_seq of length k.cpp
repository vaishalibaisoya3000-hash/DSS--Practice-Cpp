#include<iostream>
#include <vector>
using namespace std;

void input(int n, vector<string> &nums,  int i=0){
    if(i==n) return;
    cin>>nums[i];
    input(n,nums,i+1);
}

void subset(int n, const vector<string> &nums, string ans, int &c, int k, int i=0){
    if(i==n) {
        if(ans.size()==k){
        cout<<"["<< ans <<"]";
        c++;
        }
        return;
    }
    subset(n, nums, ans+nums[i], c, k, i+1); //include
    subset(n, nums, ans, c, k, i+1);  //exclude
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

    cout<<"enter the lenght of sunsequence: ";
    int k;
    cin>>k;
    cout<<endl;

    cout<<"the subsequences of length "<< k <<" : ";
    subset(n, arr, ans, c, k, 0);
    cout<<endl;
    cout<<"the total subsequences will be: "<< c <<endl;

    return 0;
}