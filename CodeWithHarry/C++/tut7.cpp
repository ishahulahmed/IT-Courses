#include <iostream>
using namespace std;

int c = 45; 

int main(){

    // **************Built in Data Types****************
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

    // **************float, double and long double Literals****************
    // 34.4 --> By default double
    //f --> float, l --> long double
    // here we have declared types so no impact but during function overloading these literals are useful
    // float d = 34.4f; // it is redundtant here as we have already stated it as float 
    // d = 34.4F;
    // long double e = 34.4l;
    // e = 34.4L;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.3L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;


    // **************Reference Variables****************
    // Rohan --> Monty --> Rohu --> Dangerous Coder
    // Reference variables can be defined as another name for an already existing variable
    // float x = 455;
    // float & y = x;
    // y  = 333; for both x and y it will give 333 as y is reference variable of x
    // cout<<x<<endl;
    // cout<<y<<endl;

    // **************Typecasting****************
    int a = 45;
    float b = 45.46;
    cout <<"The value of a is "<<(float)a<<endl;
    cout <<"The value of a is "<<float(a)<<endl;
    
    cout <<"The value of b is "<<(int)b<<endl;
    cout <<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
    
    return 0;
}
