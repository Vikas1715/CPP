#include <iostream>
#include <list>
#include <deque>
using namespace std;
int main()
{
    list<int> lst = {1, 2, 3, 4};
    lst.push_front(-1);
    lst.push_back(5);
    for (int i : lst)
        cout << i << " ";
    cout << endl;
    lst.pop_front();
    lst.pop_back();
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
        cout << *(it) << " ";
    cout << endl;

    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    for (int i : d)
        cout << i << " ";
    cout << endl;

    return 0;
}