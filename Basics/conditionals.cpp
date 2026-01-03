#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>130 || age<=0) cout<<"Invalid age."<<endl;
    else if(age>=18){
        cout<<"You can vote."<<endl;
    } else {
        cout<<"You can not vote."<<endl;
    }
    return 0;
}