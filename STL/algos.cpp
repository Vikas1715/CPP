#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {4, 3, 7, 1, 2};
    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";
    cout << endl;
    int n = 5;
    int arr[n] = {2, 6, 3, 1, 0};
    sort(arr, arr + n);
    for (int i : arr)
        cout << i << " ";
    cout << endl;
    sort(arr, arr + n, greater<int>());
    for (int i : arr)
        cout << i << " ";
    cout << endl;

    reverse(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";
    cout << endl;

    vector<char> vc = {'a', 'b', 'c'};
    if (next_permutation(vc.begin(), vc.end()))
    {
        for (char c : vc)
            cout << c << " ";
    }
    else
        cout << "No next permutation.";
    cout << endl;

    for (char i : vc)
        cout << i << " ";
    cout << endl;

    prev_permutation(vc.begin(), vc.end());
    for (char c : vc)
        cout << c << " ";
    cout << endl;

    int a = 5, b = 10;
    swap(a, b);
    cout << "a: " << a << " b: " << b << endl;

    cout << max(4, 0) << endl;
    cout << min(-2, -3) << endl;
    cout << *(max_element(v.begin(), v.end())) << endl;
    cout << *(min_element(v.begin(), v.end())) << endl;

    vector<int> sv = {1, 2, 3, 4, 5, 6};
    sv.insert(sv.begin() + 2, -1);
    int target = 2;
    cout << binary_search(sv.begin(), sv.end(), target) << endl;

    // Count Set Bits
    int num = 15;
    cout << __builtin_popcount(num) << endl;   // int
    cout << __builtin_popcountl(num) << endl;  // long int
    cout << __builtin_popcountll(num) << endl; // long long int
    return 0;
}
