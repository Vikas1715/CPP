#include <iostream>
#include <vector>
using namespace std;
int main()
{
    pair<int, int> p1 = {1, 2};
    pair<int, string> p2 = {2, "Hello"};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p3 = {1, {2, 3}};
    cout << p3.second.first << endl;

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(2, 3);
    for (auto p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}