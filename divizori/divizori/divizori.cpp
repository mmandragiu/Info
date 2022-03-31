#include <fstream>
#include <string>

using namespace std;

long long nrprelucrate, divi, copiedivi, copie2divi, n, k, divmax, nrmindivmax, noun, cif, minnk, maxnk;
char v[1000000];
string numarlung;


int main()
{
	ifstream in("divizori.in");
	ofstream out("divizori.out");
	in >> n >> k;
	in >> numarlung;
	for (int i = 0; i < n; i++)
		v[n - 1 - i] = numarlung[i] - '0';

	divi = -1;
	while (noun != divi)
	{
		nrprelucrate++;
		noun = 0;

		minnk = k < n ? k : n;
		maxnk = k > n ? k : n;

		for (int i = 0; i < minnk; i++)
		{
			noun = noun * 10 + v[n - 1 - i];
			v[n - 1 - i] = 0;
		}

		long long copienoun = noun;

		int divizori = 0, d;
		for (d = 1; d * d < copienoun; d++)
			if (copienoun % d == 0)
				divizori += 2;
		if (d * d == copienoun)
			divizori++;


		divi = divizori;
		copiedivi = divi;
		copie2divi = divi;

		if (divi > divmax)
		{
			divmax = divi;
			nrmindivmax = noun;
		}
		else if (divi == divmax)
		{
			if (nrmindivmax > noun)
				nrmindivmax = noun;
		}

		cif = 0;
		while (copie2divi > 0)
		{
			cif++;
			copie2divi /= 10;
		}

		for (int i = 1; i <= cif; i++)
		{
			v[n - 1 - minnk + i] = divi % 10;
			divi /= 10;
		}

		if (n < k)
			n = cif;
		else
			n -= (k - cif);

		divi = copiedivi;
	}
	out << nrprelucrate << '\n' << divmax << '\n' << nrmindivmax;
	return 0;
}