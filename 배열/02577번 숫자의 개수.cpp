#include <stdio.h>
using namespace std;

int main()
{
	int a, b, c;
	int result[10] = { 0 };
	scanf("%d %d %d", &a, &b, &c);
	a *= b * c;
	while (a) {
		result[a % 10]++;
		a /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", result[i]);
}