#include <iostream>
using namespace std;
int main(){
    int a = 95;
    int * ptra = &a;
    cout<<ptra<<endl;
    cout<<*ptra;
    return 0;
}