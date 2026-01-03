#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    map<string, int> mp;
    mp.insert({"Hello", 1});
    mp.insert({"Charlie", 2});
    mp["Vikas"] = 17;
    mp["Charlie"] = -1;
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).first << " " << it->second << endl;
    }

    if (mp.find("Vikas") != mp.end())
        cout << mp["Vikas"] << endl;
    else
        cout << "Not found" << endl;

    if (mp.find("Vishal") != mp.end())
        cout << mp["Vishal"] << endl;
    else
        cout << "Not found" << endl;

    multimap<int, int> m;
    m.insert({1, -1});
    m.emplace(2, -3);
    m.emplace(-1, -1);

    m.erase(m.find(1)); // first occurence of 1 is removed/erased.
    m.erase(1);         //  All values are erased

    unordered_map<int, int> mp2;
    mp2.insert({1, 2});
    mp2.emplace(2, 5);
    for (auto i : mp2)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}