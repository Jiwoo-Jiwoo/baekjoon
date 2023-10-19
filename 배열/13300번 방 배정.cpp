#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K, S, Y;
	cin >> N;
	cin >> K;
	vector<int> v(N);
	int count[6][2] = { 0, };

	for (size_t i = 0; i < N; i++)
	{
		cin >> S;
		cin >> Y;
		count[Y - 1][S]++;
	}

	int ans = 0;

	for (size_t i = 0; i < 6; i++)
	{
		ans += ((count[i][0] == 0 ? 0 : ((count[i][0] - 1) / K + 1))
			+ (count[i][1] == 0 ? 0 : ((count[i][1] - 1) / K + 1)));
	}

	cout << ans;
}