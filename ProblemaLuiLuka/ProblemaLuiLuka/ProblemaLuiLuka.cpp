#include <iostream>
#include <algorithm>
using namespace std;

int t, n, m[100000], v[100], dif[5000], mindif, div_total;

int main()
{
	mindif = 1000000001;
	cin >> t >> n;
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	int a = v[1], b, r;
	for (int i = 2; i <= n; i++)
	{
		b = v[i];
		while (b != 0)
		{
			r = a % b;
			a = b;
			b = r;
		}
	}
	if (t == 1)
		cout << a;
	else
	{
		int contor = 0;
		for (int i = 1; i < n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				contor++;
				dif[contor] = abs(v[i] - v[j]);
				mindif = min(mindif, dif[contor]);
			}
		}
		for (int d = 1; d * d <= mindif; d++)
		{
			if (mindif % d == 0)
			{
				bool ok = true;
				for (int i = 1; i <= contor; i++)
				{
					if (dif[contor] % d != 0)
					{
						ok = false;
						break;
					}
				}
				if (ok == true)
				{
					div_total++;
					m[div_total] = d;
				}
				if (d * d < mindif)
				{
					ok = true;
					for (int i = 1; i <= contor; i++)
					{
						if (dif[contor] % (mindif / d) != 0)
						{
							ok = false;
							break;
						}
					}
					if (ok)
					{
						div_total++;
						m[div_total] = mindif / d;
					}
				}
			}
		}
		sort(m + 1, m + div_total + 1);
		for (int i = 2; i <= div_total; i++)
			cout << m[i] << " ";
	}
	return 0;
}