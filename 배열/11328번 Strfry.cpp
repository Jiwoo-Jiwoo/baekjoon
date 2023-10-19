#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for (size_t i = 0; i < N; i++)
	{
		int a['z' - 'a' + 1] = { 0, };
		string str1, str2;
		cin >> str1 >> str2;

		for (auto c : str1) a[c - 'a']++;
		for (auto c : str2) a[c - 'a']--;

		bool isPossible = true;

		for (int i : a)
			if (i != 0) isPossible = false;

		if (isPossible)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
	}
}