#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout<<"enter str:";
    getline(cin,str);
    cout<<"\nverify str:"<<str<<endl;
    int i;
    string vowels;
    string consonent;
    for(i=0;i< str.size();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowels +=str[i];
        cout<<str[i]<<" is a vowel\n";
        }
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            consonent +=str[i];
            cout<<str[i]<<" is a consonent\n";   
        }
    }
    cout<<"\nvowels:"<<vowels<<endl;
    cout<<"\nconsonents:"<<consonent<<endl;
    
    return 0;

}
