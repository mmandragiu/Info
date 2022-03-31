#include <fstream>
#include <algorithm>
using namespace std;

unsigned long long a[101][101], sumnord, sumest, sumsud, sumvest, b[101][101], summax, st;
int n, i, cat;

int main()
{
	ifstream in("cifru1.in");
	ofstream out("cifru1.out");
	in >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			in >> a[i][j];
	i = 1;
	if (n % 2 == 0)
		cat = n / 2;
	else
		cat = (n - 1) / 2;
	while (i <= cat)
	{
		sumnord = 0;
		sumest = 0;
		sumsud = 0;
		sumvest = 0;
		for (int j = i; j <= n - i + 1; j++)
		{
			sumnord += a[i][j];
			sumest += a[j][n - i + 1];
			sumsud += a[n - i + 1][j];
			sumvest += a[j][i];
		}
		summax = max(sumnord, sumest);
		summax = max(summax, sumsud);
		summax = max(summax, sumvest);
		if (summax == sumnord)
		{
			for (int j = i; j <= n - i + 1; j++)
			{
				b[i][j] = a[i][j];
				b[j][n - i + 1] = a[j][n - i + 1];
				b[n - i + 1][j] = a[n - i + 1][j];
				b[j][i] = a[j][i];
			}
		}
		else
		{
			if (summax == sumvest)
			{
				for (int j = i; j <= n - i + 1; j++)
				{
					b[i][j] = a[n - j + 1][i];
					b[j][i] = a[n - i + 1][j];
					b[n - i + 1][j] = a[n - j + 1][n - i + 1];
					b[n - j + 1][n - i + 1] = a[i][n - j + 1];
				}
			}
			if (summax == sumsud)
			{
				for (int j = i; j <= n - i + 1; j++)
				{
					b[i][j] = a[n - i + 1][n - j + 1];
					b[n - i + 1][j] = a[i][n - j + 1];
					b[j][n - i + 1] = a[n - j + 1][i];
					b[j][i] = a[n - j + 1][n - i + 1];
				}
			}
			if (summax == sumest)
			{
				for (int j = i; j <= n - i + 1; j++)
				{
					b[i][j] = a[j][n - i + 1];
					b[j][n - i + 1] = a[n - i + 1][n - j + 1];
					b[n - i + 1][j] = a[j][i];
					b[j][i] = a[i][n - j + 1];
				}
			}
		}
		st += summax;
		i++;
	}
	if (n % 2 == 1)
	{
		int mijloc = (n + 1) / 2;
		b[mijloc][mijloc] = a[mijloc][mijloc];
	}

	out << st << '\n';
	for (int k = 1; k <= n; k++)
	{
		for (int j = 1; j <= n; j++)
			out << b[k][j] << " ";
		out << '\n';
	}
	return 0;
}