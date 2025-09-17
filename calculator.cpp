#include<iostream>
using namespace std;
int main(){
    int n,m;
    char opt;
    cout<<"enter the values : ";
    cin>>n;
    cin>>m;
    cin>>opt;
    if(opt=='+'){
        cout<<n+m;
    }
    if(opt=='*'){
        cout<<n*m;
    }
    if(opt=='/'){
        cout<<n/m;
    }
    if(opt=='-'){
        cout<<n-m;
    }


}