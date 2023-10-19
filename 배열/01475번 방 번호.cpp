#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v(10);
	string s;
	cin >> s;
	for (size_t i = 0; i < s.size(); i++)
	{
		v[s[i] - '0']++;
	}

	int result = (v[6] + v[9] + 1) / 2;
	v[6] = 0;
	v[9] = 0;

	int maxCount = *max_element(v.begin(), v.end());
	result = max(maxCount, result);

	cout << result;
}