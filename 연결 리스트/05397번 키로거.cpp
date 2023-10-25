#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	string input;
	list<char> str;

	for (int index = 0; index < T; index++)
	{
		cin >> input;
		str.clear();
		auto cursor = str.begin();

		for (int i = 0; i < input.size(); i++)
		{
			switch (input[i])
			{
			case '<':
				if (str.begin() == cursor) continue;
				cursor--;
				break;
			case '>':
				if (str.end() == cursor) continue;
				cursor++;
				break;
			case '-':
				if (str.begin() == cursor) continue;
				cursor--;
				cursor = str.erase(cursor);
				break;
			default:
				str.insert(cursor, input[i]);
				break;
			}
		}

		for (auto it = str.begin(); it != str.end(); it++)
		{
			cout << (*it);
		}

		cout << "\n";
	}
}