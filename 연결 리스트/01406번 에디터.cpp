#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string input;
	cin >> input;

	list<char> str;
	for (int i = 0; i < input.size(); i++)
	{
		str.push_back(input[i]);
	}
	auto cursor = str.end();

	int M;
	cin >> M;
	char cmd;
	char addChar;
	for (int i = 0; i < M; i++)
	{
		cin >> cmd;
		switch (cmd)
		{
		case 'L':
			if (str.begin() == cursor) continue;
			cursor--;
			break;
		case 'D':
			if (str.end() == cursor) continue;
			cursor++;
			break;
		case 'B':
			if (str.begin() == cursor) continue;
			cursor--;
			cursor = str.erase(cursor);
			break;
		case 'P':
			cin >> addChar;
			str.insert(cursor, addChar);
			break;
		}
	}

	for (auto it = str.begin(); it != str.end(); it++)
	{
		cout << (*it);
	}
}