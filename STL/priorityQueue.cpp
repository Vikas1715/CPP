#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> q;                             // Max Heap
    priority_queue<int, vector<int>, greater<int>> q2; // Min Heap
    q.push(1);
    q.push(3);
    q.push(4);
    q.push(2);
    while (q.size() > 0)
    {
        cout << q.top() << endl;
        q.pop();
    }
    q2.push(10);
    q2.push(6);
    q2.push(9);
    while (q2.size() > 0)
    {
        cout << q2.top() << endl;
        q2.pop();
    }

    return 0;
}