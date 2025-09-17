 #include<iostream>
using namespace std;
int main()
{
    int l;
    cout<<"enter the length : ";
    cin>>l;
    int b;
    cout<<"enter the breadth : ";
    cin>>b;
    float A;
    A = l*b;
    cout<<A<<endl;
    float p;
    p = 2*(l+b);
    cout<<p<<endl;
    if(A>p){
        cout<<"area is greater";
    }
    if(A<p){
        cout<<"area is smaller";
    }
    else if(p=A){
        cout<<"area is equal to perimeter";
    }

}