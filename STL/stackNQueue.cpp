#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(11);
    st.push(2);
    cout << st.top() << endl;
    st.pop();
    cout << st.size() << " " << st.empty() << endl;

    stack<int> s2;
    s2.push(-1);
    st.swap(s2);
    s2.push(-39);
    while (st.size())
    {
        cout << st.top() << endl;
        st.pop();
    }
    while (s2.size())
    {
        cout << s2.top() << endl;
        s2.pop();
    }

    queue<int> q;
    q.push(1);
    q.push(2);
    cout << q.front() << endl;
    q.pop();
    cout << "hh" << q.size() << " " << q.empty() << endl;
    return 0;
}