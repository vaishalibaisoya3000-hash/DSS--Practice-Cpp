#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout<<"enter str:\n";
    getline(cin,str);
    cout<<endl;
    int i;
    string rev(str.size(),' ');
    for(i=0;i<str.size();i++){
        rev.at(i)=str.at((str.size())-1-i);       
    }
    cout<<"rev:"<<rev<<endl;
    if(rev==str)
    cout<<"palindrome yes";
    else
    cout<<"no";

    return 0;
}