#include <iostream>
using namespace std;

int c = 45; 

int main(){
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

    // 34.4 --> By default double
    //f --> float, l --> long double
    // here we have declared types so no impact but during function overloading these literals are useful
    float d = 34.4f; // it is redundtant here as we have already stated it as float 
    d = 34.4F;
    long double e = 34.4l;
    e = 34.4L;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    return 0;
}
