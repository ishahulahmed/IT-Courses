#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // int a = 34;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is: "<<a<<endl;
    // Constants in c++
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;  You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;
    
    //********Manipulators in C++***********
    // Manipulators help in data format while displaying output
    // example - endl, setw
    // int a = 3, b = 78, c = 1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    //**********Operator Precedence*************
    int a = 3, b = 4;
    // int c = (a*5)+b;
    // If Operator Precedence is same the we will look into associativity
    // https://en.cppreference.com/w/cpp/language/operator_precedence
    int c = ((((a*5)+b)-47)+87);
    return 0;
}