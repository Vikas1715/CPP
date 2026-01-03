#include <iostream>
using namespace std;
int main()
{
    int idx = 0;
    while (idx <= 30)
    {
        cout << idx++ << " ";
        // idx++;
    }

    cout << "\n";
    idx = 10;
    do
    {
        cout << idx-- << " ";
    } while (idx > 23);

    cout<<"\n";
    for(int i=0; i<8; i++){
        cout<<i<<" ";
    }
    
    return 0;
}