#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;
	vector<int> result;

	list<int> nums;
	for (int i = 1; i <= N; i++)
	{
		nums.push_back(i);
	}

	auto it = nums.begin();
	while (nums.size() > 0)
	{
		for (size_t i = 0; i < K - 1; i++)
		{
			it++;
			if (it == nums.end()) it = nums.begin();
		}

		result.push_back(*it);
		it = nums.erase(it);
		if (it == nums.end()) it = nums.begin();
	}

	cout << "<";
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
		if (i != result.size() - 1) cout << ", ";
	}
	cout << ">";
}