#include <fstream>
using namespace std;

int k, n, p, q, r, s, t, u, pozmaxa, pozstartsecventa = -1;
long long a[4000000], b[4000000], maxa;


int main()
{
	ifstream in("ab.in");
	ofstream out("ab.out");
	in >> k;
	in >> a[0] >> a[1] >> p >> q >> r;
	if (a[0] > a[1]) {
		pozmaxa = 0;
		maxa = a[0];
	}
	else
	{
		pozmaxa = 1;
		maxa = a[1];
	}

	for (int i = 2; i < k; i++)
	{
		a[i] = (p * a[i - 1] + q * a[i - 2]) % r;
		if (a[i] > maxa) {
			pozmaxa = i;
			maxa = a[i];
		}
	}
	in >> n;
	in >> b[0] >> b[1] >> s >> t >> u;


	for (int i = 2; i < n; i++) {
		b[i] = b[i - 1] + (s * b[i - 1] + t * b[i - 2]) % u;
		if (b[i] >= maxa)
		{
			pozstartsecventa = i;
			break;
		}
	}

	if (pozstartsecventa + k - 1 - pozmaxa >= n || pozstartsecventa == -1)
	{
		out << 0;
		return 0;
	}

	for (int i = pozmaxa - 1; i >= 0; i--)
	{
		if (a[i] <= b[pozstartsecventa - 1])
			pozstartsecventa--;
		else
			while (a[i] > b[pozstartsecventa])
				pozstartsecventa++;
	}

	out << pozstartsecventa + 1;

	return 0;
}