#include <fstream>
using namespace std;
ifstream in("nrcurat.in");
ofstream out("nrcurat.out");
int CifNr(int x)
{
	int cif=0;
	while (x)
	{
		cif++;
		x /= 10;
	}
	return cif;
}

int main()
{
	int n, oglindit = 0, urma = 0,copien=0,nou_n=0;
	while (in >> n)
	{
		copien = n;
		while (n)
		{
			oglindit = oglindit * 10 + n % 10;
			n /= 10;
		}
		n = copien;
		for (int i = 1; i <= CifNr(n); i++)
		{
			nou_n = nou_n * 10 + 9;
		}
		urma = nou_n - n;
		n = copien;
		if (oglindit==urma)
			out << 1 << " ";
		else
			out << 0 << " ";
		oglindit = 0;
		nou_n = 0;
		urma = 0;
	}
	return 0;
}