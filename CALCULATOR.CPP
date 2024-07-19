//calculator task c++





#include <iostream>
using namespace std ;
int main() {
    int a,b,c,d;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"enter your choice of operation";
    cin>>d;
    switch (d)    {
    case 1: c=a+b;
           cout<<"addition of two numbers are "<<c;
           break;
    case 2: c=a-b;
           cout<<"subtrsction of two numbers are "<<c;
           break;
    case 3: c=a*b;
           cout<<"multiplication of two numbers are "<<c;
           break;
    case 4: c=a/b;
           cout<<" divison of two numbers are "<<c;
           break;
    
    default: cout<<"enter valid operation";
        break;
    }
    return 0;
}