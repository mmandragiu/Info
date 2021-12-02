#include <iostream>
using namespace std;

int main()
{
	int n, a, b, poz = 0, min = 0, max = 0, difmin = 1000000000;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		if (a > b)
		{
			max = a;
			min = b;
		}
		else
		{
			max = b;
			min = a;
		}
		if (max - min <= difmin)
		{
			poz = i;
			difmin = max - min;
		}
	}
	cout << poz;
}