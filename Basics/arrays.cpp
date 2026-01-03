#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3};
    int marks[6];
    for(int i=0; i<6; i++){
        cin>>marks[i];
    }
    for(int i : marks){
        cout<<i<<" ";
    }
    cout<<"\n";
    int mat[2][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>mat[i][j];
        }
    }
    for(auto &row : mat){
        for(int &j : row) cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}