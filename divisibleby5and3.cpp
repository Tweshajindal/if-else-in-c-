#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the no : ";
    cin>>x;
    if(x%5==0 && x%3==0 && x%15==0)
    {
        cout<<"divisible";
    }
    else{
        cout<<"not divisible";
    }
}