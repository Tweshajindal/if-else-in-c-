#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the value 1 : ";
    cin>>x;
    int y;
    cout<<"enter the value 2 : ";
    cin>>y;
    if(x>y){
        cout<<"profit"<<endl;
        cout<<x-y;
    }
     if(x==y){
        cout<<"no profit no loss"<<endl;
        cout<<x-y;
    }
    else if (x<y)
    {
        cout<<"loss"<<endl;
        cout<<x-y;
    }
}