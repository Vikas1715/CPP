#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
    cout<<a<<" - " <<b<<" : "<<a-b<<endl;
    cout<<a<<" * " <<b<<" : "<<a*b<<endl;
    cout<<a<<" / " <<b<<" : "<<a/b<<endl;
    cout<<a<<" / " <<b<<" : "<<(float)a/b<<endl;
    return 0;
}