#include <fstream>
#include <bitset>

using namespace std;

int n, iteratii, k, p, nrc1, nrc3, x, cmihai, cmara, Eratostene[2000000];
bitset<2000001> fmihai, fmara;

long long rubinemihai, rubinemara;

int main()
{
	ifstream in("rubine.in");
	ofstream out("rubine.out");
	in >> n >> k >> p;

	Eratostene[0] = 1, Eratostene[1] = 1;
	for (int i = 2; i * i < 2000000; i++)
	{
		if (Eratostene[i] == 0)
			for (int j = 2; j <= 2000000 / i; j++)
				Eratostene[i * j] = 1;
	}

	cmihai = 1, cmara = 1, iteratii = 0;
	bool mihaigata = false, maragata = false;

	while (mihaigata != true || maragata != true)
	{
		iteratii++;

		if (cmihai == cmara)
			nrc3++;

		if (fmihai[cmihai] && mihaigata != true)
			mihaigata = true;
		if (fmara[cmara] && maragata != true)
			maragata = true;

		if (cmara == cmihai && (!maragata && !mihaigata)) {
			if (!maragata)
				fmara[cmara] = 1;
			if (!mihaigata)
				fmihai[cmihai] = 1;
		}
		else
		{
			if (!fmihai[cmara] && !maragata)
				fmara[cmara] = 1;
			if (!fmara[cmihai] && !mihaigata)
				fmihai[cmihai] = 1;
		}


		cmihai = (cmihai + p) % n;
		if (!cmihai)
			cmihai = n;
		cmara = (cmara + k) % n;
		if (!cmara)
			cmara = n;
	}



	for (int i = 1; i <= n; i++)
	{
		in >> x;
		if (Eratostene[x] == 0)
			nrc1++;
		else
		{
			if (fmara[i] && fmihai[i]) {
				if (x % 2 == 1) {
					rubinemara += (x + 1) / 2;
					rubinemihai += (x - 1) / 2;
				}
				else
				{
					rubinemara += x / 2;
					rubinemihai += x / 2;
				}
			}
			else
			{
				if (fmara[i])
					rubinemara += x;
				else if (fmihai[i])
					rubinemihai += x;
			}
		}
	}
	nrc3--;
	out << nrc1 << endl << rubinemara << " " << rubinemihai << endl << nrc3;
}