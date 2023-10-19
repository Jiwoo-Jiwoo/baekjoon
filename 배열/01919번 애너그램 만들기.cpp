#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str1, str2;
	cin >> str1 >> str2;

	int a['z' - 'a' + 1] = { 0, };

	for (auto c : str1) a[c - 'a']++;
	for (auto c : str2) a[c - 'a']--;

	int count = 0;
	for (int i : a)
	{
		count += abs(i);
	}

	cout << count;
}