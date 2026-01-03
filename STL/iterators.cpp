#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << *(vec.begin()) << endl;
    cout << *(vec.end()) << endl;
    cout << *(vec.end() - 1) << endl;

    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto i = vec.begin(); i < vec.end(); i++)
        cout << *(i) << " ";
    cout << endl;

    vector<int>::reverse_iterator itr;
    for (itr = vec.rbegin(); itr < vec.rend(); itr++)
        cout << *(itr) << " ";
    cout << endl;
    return 0;
}