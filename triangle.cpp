 #include<iostream>
 using namespace std;
 int main(){
    int a;
    cout<<"enter value of a : ";
    cin>>a;
    int b;
    cout<<"enter value of b : ";
    cin>>b;
    int c;
    cout<<"enter value of c : ";
    cin>>c;
    if(a+b>c || b+c>a || c+a>b)
    {
        cout<<"it forms a triangle";
    }
    else{
        cout<<"it does not";
    }
 }