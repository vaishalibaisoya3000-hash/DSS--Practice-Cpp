#include <iostream>
#include <string>
using namespace std;
int main() {
    cout<<"enter ss:";
    string ss;
    getline(cin,ss);
    cout<<"ss:"<<ss;
    cout<<endl;
    string s;
    cout<<"\nenter s:";
    s="here it will print space but not \\n \\0 \\n";
    cout<<"s:"<<s;
    cout<<endl;
    string oo;
    cout<<"\nenter oo:";
    cin>>oo;
    cout<<"oo:"<<oo;

    return 0;
}