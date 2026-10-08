#include<iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout<<"enter str:";
    getline(cin,str);
    cout<<"verify:"<<str;
    cout<<endl<<endl;
    cout<<"element at first:"<<str.at(0)<<endl;
    cout<<"element at last:"<<str.at(str.size()-1)<<endl;

    cout<<"element at first:"<<str.front()<<endl;
    cout<<"element at last:"<<str.back();

    return 0;
}