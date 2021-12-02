#include <fstream>
using namespace std;

ifstream cin("frecventa1.in");
ofstream cout("frecventa1.out");

int n, f[100], v[100], x;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		f[x]++;
	}
	for (int i = 0; i < 100; ++i)
		v[i] = i;
	for (int i = 0; i < 100; ++i)
	{
		for (int j = i + 1; j < 100; ++j)
		{
			if (f[v[i]] < f[v[j]])
			{
				swap(v[i], v[j]);
			}
			else
			{
				if (f[v[i]] == f[v[j]] && v[i] > v[j])
					swap(v[i], v[j]);
			}
		}
	}
	for (int i = 0; i <=99; i++)
		if (f[v[i]])
			cout << v[i] << " ";
	return 0;
}