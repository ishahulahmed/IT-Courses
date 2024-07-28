// There are two types of header files:
// 1. System header files: It comes with the compiler
   #include <iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" --> This will produce an error if this.h is not present in the current directory

using namespace std;

int main()
{
    int a = 4, b = 5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++:"<<endl;
    // Arithmetic Operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    int c = 3, d = 9;
    char e = 'd';

    // Comparison Operators
    cout<<"Following are the Comparison operators in C++:"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;

   // Logical Operators
    cout<<"Following are the Logical operators in C++:"<<endl;
    cout<<"The value of this logical AND operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical OR operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical NOT operator (!(a==b)) is: "<<(!(a==b))<<endl;
    return 0;
}