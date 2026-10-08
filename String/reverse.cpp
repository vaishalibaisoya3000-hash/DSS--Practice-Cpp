#include <iostream>
#include <string>
using namespace std;
int main() {
    string sidha;
    cout<<"enter sidha:\n";
    getline(cin,sidha);
    cout<<endl;
    int i;
    string ulta(sidha.size(),' ');
    for(i=0;i<sidha.size();i++){
        ulta.at(i)=sidha.at((sidha.size())-1-i);       
    }
    cout<<"the reverse of sidha is ulta i.e:"<<ulta;

    return 0;
}