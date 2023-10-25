#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int K;
	cin >> K;

	stack<int> nums;
	long long result = 0;
	long long input;

	for (int i = 0; i < K; i++)
	{
		cin >> input;
		if (0 == input)
		{
			result -= nums.top();
			nums.pop();
		}
		else
		{
			result += input;
			nums.push(input);
		}
	}

	cout << result;
}