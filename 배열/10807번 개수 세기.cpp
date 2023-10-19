#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count;
    cin >> count;
    vector<int> v;
    for (int i = 0; i < count; i++)
    {
        v.push_back(i);
        cin >> v[i];
    }

    int target;
    cin >> target;

    count = 0;
    for (int n : v)
        if (n == target) ++count;

    cout << count;

    return 0;
}