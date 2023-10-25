#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	queue<int> nums;
	stack<int> temp;
	vector<const char*> cmd;
	for (int i = 1; i <= n; i++) nums.push(i);

	int input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;

		if (temp.empty())
		{
			temp.push(nums.front());
			nums.pop();
			cmd.push_back("+\n");
		}

		if(temp.top() > input)
		{
			cout << "NO";
			return 0;
		}

		while (temp.top() < input)
		{
			temp.push(nums.front());
			nums.pop();
			cmd.push_back("+\n");
		}

		temp.pop();
		cmd.push_back("-\n");
	}

	for (int i = 0; i < cmd.size(); i++)
	{
		cout << cmd[i];
	}
}