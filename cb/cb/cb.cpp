#include <iostream>
#include <algorithm>
using namespace std;

int v[200001];

int main()
{
	int n, x, y, t, left, right, mid, nr = 0, st = -1, dr = -1;
	bool found = false;
	cin >> n >> t;
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	sort(v + 1, v + n + 1);
	for (int i = 1; i <= t; i++)
	{
		cin >> x >> y;
		left = 1;
		right = n;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (v[mid] >= x)
			{
				st = mid;
				right = mid - 1;
			}
			else
				left = mid + 1;
		}
		left = 1;
		right = n;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (v[mid] <= y)
			{
				dr = mid;
				left = mid + 1;
			}
			else
				right = mid - 1;
		}
		if (st == -1)
			cout << 0 << " ";
		else
			cout << dr - st + 1 << " ";
		st = -1;
	}
	return 0;
}