#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	stack<int> nums;
	string cmd;
	int input;
	for (int i = 0; i < N; i++)
	{
		cin >> cmd;
		if (!cmd.compare("pop"))
		{
			if (nums.size() == 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << nums.top() << "\n";
				nums.pop();
			}
		}
		else if (!cmd.compare("size"))
			cout << nums.size() << "\n";
		else if (!cmd.compare("empty"))
			cout << nums.empty() << "\n";
		else if (!cmd.compare("top"))
		{
			if (nums.size() == 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << nums.top() << "\n";
			}
		}
		else
		{
			cin >> input;
			nums.push(input);
		}
	}
}