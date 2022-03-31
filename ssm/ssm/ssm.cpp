#include <fstream>

using namespace std;

const int N= 7000005;
const int NMAX = 6000001;

int bestsum[N], n, x, a[NMAX], bestSUM, st_max, dr_max, suma = 0;

int main()
{
	bool found = false;
	ifstream in("ssm.in");
	ofstream out("ssm.out");
	in >> n;
	for (int i = 1;i <= n; i++)
		in >> a[i];
	bestSUM = a[1];
	for (int i = 1; i <= n; i++)
	{
		bestsum[i] = a[i];
		if (bestsum[i] < bestsum[i - 1] + a[i])
			bestsum[i] = bestsum[i - 1] + a[i];
		if (bestSUM < bestsum[i])
		{
			bestSUM = bestsum[i];
			dr_max = i;
		}
	}
	int copie = dr_max;
	while (found == false)
	{
		suma += a[copie];
		if (suma == bestSUM)
		{
			if (a[copie - 1] == 0)
			{
				found = false;
				copie--;
				continue;
			}
			else
			{
				found = true;
				st_max = copie;
				break;
			}
		}
		copie--;
	}
	out << bestSUM<<" "<<st_max<<" "<<dr_max;
	return 0;
}