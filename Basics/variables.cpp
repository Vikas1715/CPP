#include <iostream>
using namespace std;
int main(){
/*
    short sa = 9;
    int a, b, c;
    a = 7;
    b = 10;
    c = 8;
    // cout<<sa;

    // camelCase Notation
    int marksInMaths = 83;
    cout<<"The marks of the student in math: "<<marksInMaths; // ********
*/
    short a;
    int b;
    long c;
    long long d;
    float score = 67.32;
    double score2 = 78.9999;
    long double score3 = 78.2947;
    score = 89.23;

    int const i = 67; // Can't be changed in future...
    
    cout<<"The score is: "<<score;
    cout<<"\nThe score is: "<<score2<<endl;
    cout<<"The score is: "<<score3;
    return 0;
}