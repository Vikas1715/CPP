#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(-1);
    s.insert(2);
    for (int i : s)
        cout << i << endl;
    cout << *(s.lower_bound(-1)) << endl;
    cout << *(s.upper_bound(-1)) << endl;
    cout << *(s.lower_bound(0)) << endl;

    multiset<int> st;
    st.insert(-1);
    st.insert(2);
    st.insert(-1);
    for (int i : st)
        cout << i << endl;

    unordered_set<int> us;
    us.insert(2);
    us.insert(-1);
    us.insert(3);
    us.insert(-1);
    us.insert(4);
    for (int i : us)
        cout << i << endl;
    return 0;
}