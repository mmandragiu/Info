#include <fstream>
using namespace std;

ifstream in("maxim7.in");
ofstream out("maxim7.out");

int f[10] = { 0 }, maxx[10] = { 0 }, n, m, c, x, a[500000] = { 0 }, poz;

int main()
{
	in >> c;
	in >> n >> m;
	if (c == 1)
	{
		for (int i = 0; i < n; i++)
		{
			in >> x;
			if (i < m)
				f[x]++;
		}
		for (int i = 9; i >= 0; i--)
			if (f[i] != 0)
			{
				for (int j = 0; j <= f[x]; j++)
					out << i;
			}
	}
	else
	{
		for (int i = 1; i <= m; i++)
		{
			in >> a[i];
			f[a[i]]++;
		}
		for (int i = m + 1; i <= n; i++)
		{
			in >> a[i];
			f[a[i]]++;
			f[a[i - m]]--;
			for (int j = 9; j >= 0; j--)
			{
				if (f[j] > maxx[j])
				{
					for (int t = 0; t <= 9; t++)
						maxx[t] = f[t];
					break;
				}
				else
				{
					if (f[j] < maxx[j])
						break;
				}
			}
		}
		for (int i = 1; i <= n - m; i++)
		{
			for (int j = i; j <= i + m; j++)
				if (f[a[j]] == maxx[j] && f[a[j]] != 0 && poz == 0)
				{
					poz = j;
				}
				else
					break;
		}
		out << poz;
	}
}