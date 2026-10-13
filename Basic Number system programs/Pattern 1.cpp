#include <iostream>
using namespace std;
int main() {
    int i,m,n,j;
    cout<<"enter row and column:";
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==0 || i==m-1){
                cout<<"*";
            }
            else{
                if(j==0 || j==n-1)
                    cout<<"*";
                else
                    cout<<" ";
                }
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    if(m==n){
    cout<<"only for square:\n";
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(i==1)
                cout<<j;
            else if(i==m)
                   cout<<i-j+1;
            else{
                if(j==1)
                    cout<<i;
                else if(j==n)
                    cout<<j-i+1;
                else  
                    cout<<" ";
            }
        }
        cout<<endl;
    }
    }
    cout<<endl;
    for(i=1;i<=m;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=m;i++){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=m;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=m;i++){
        for(j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=m;i++){
        for(j=i;j<=n;j++){
            cout<<j-i+1;
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=m;i++){
        for(j=i;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=m*(m-1)+1;i=i+m){
        for(j=1;j<=n;j++){
            cout<<i+j-1;
        }
        cout<<endl;
    }
    return 0;
}