#include <iostream>

using namespace std;

int main()
{
	int x[25001] = { 0 }, n, m, y, st, dr;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> x[i];
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> y;
		st = 0, dr = n - 1;
		int mij;
		bool found = false;
		while (st <= dr && found == false)
		{
			mij = (st + dr) / 2;
			if (x[mij] == y)
			{
				found = true;
				cout << 1 << " ";
			}
			else
			{
				if (x[mij] < y)
					st = mij + 1;
				else
					dr = mij - 1;
			}
		}
		if (found == false)
			cout << 0 << " ";
	}
	return 0;
}