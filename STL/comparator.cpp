#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first < p2.first)
        return true;
    return false;
}
int main()
{
    vector<pair<int, int>> v;
    v.push_back({1, -2});
    v.push_back({2, -3});
    v.push_back({3, -4});
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }

    sort(v.begin(), v.end(), comp);
    cout << "After sorting: " << endl;
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}