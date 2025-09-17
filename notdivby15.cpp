#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value : ";
    cin>>n;
    if((n%3==0 || n%5==0) && (n%15!=0)){
        cout<<"it is not devisible by 15";
    }
    else{
        cout<<"it is not";
    }
}