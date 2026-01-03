#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    cout << vec.size() << " " << vec.capacity() << endl;
    vec.push_back(8);
    cout << vec.size() << " " << vec.capacity() << endl;
    vec.push_back(9);
    cout << vec.size() << " " << vec.capacity() << endl;
    vec.push_back(10);
    cout << vec.size() << " " << vec.capacity() << endl;

    vec.pop_back();
    cout << vec.size() << " " << vec.capacity() << endl;

    for (int i : vec)
        cout << i << " ";

    cout << "\n"
         << vec[2];
    cout << "\n"
         << vec.at(0);
    cout << endl;
    vector<int> v2(3, -1);
    for (int i : v2)
        cout << i << " ";
    cout << endl;

    vector<int> v3(v2); // Copy of the v2
    v3[0] = 90;
    for (int i : v3)
        cout << i << " ";
    cout << endl;

    for (int i : v2)
        cout << i << " ";
    cout << endl;

    cout << vec.size() << " " << vec.capacity() << endl;
    vec.erase(vec.begin());
    cout << vec.size() << " " << vec.capacity() << endl;
    vec.erase(vec.begin(), vec.end());
    cout << vec.size() << " " << vec.capacity() << endl;

    vec.insert(vec.begin(), -1);
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    v2.clear();

    for (int i : v2)
        cout << i << " ";

    cout << vec.empty() << " " << v2.empty() << endl;

    return 0;
}
