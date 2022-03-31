#include <fstream>
using namespace std;

int D[20], E[20], n, C, nrputeri;
unsigned long long divizori[1010001], puteri[10], nrdivizori = 1, x, A, B;

int main()
{
	ifstream in("descmult.in");
	ofstream out("descmult.out");
	in >> C;
	in >> n >> A >> B;
	for (int i = 0; i < n; i++) {
		in >> D[i];
	}
	for (int i = 0; i < n; i++) {
		in >> E[i];
	}

	if (C == 1)
	{
		for (int i = 0; i < n; i++)
			nrdivizori *= (E[i] + 1);

		out << nrdivizori;
	}

	if (C == 2) {
		divizori[0] = 1;
		if (A == 1) out << "1 ";
		for (int i = 0; i < n; i++) {
			x = 1;
			nrputeri = 0;

			for (int j = 1; j <= E[i]; j++) {
				x *= D[i];
				if (x > B)
					break;
				puteri[nrputeri] = x;
				nrputeri++;
			}

			int copienrdivizori = (int)nrdivizori;

			for (int j = 0; j < nrputeri; j++)
			{
				divizori[nrdivizori] = puteri[j];
				if (divizori[nrdivizori] >= A && divizori[nrdivizori] <= B)
					out << divizori[nrdivizori] << " ";

				nrdivizori++;
				for (int k = 1; k < copienrdivizori; k++) {
					unsigned long long divizornou = divizori[k] * puteri[j];
					if (divizornou <= B) {
						divizori[nrdivizori] = divizornou;
						if (divizori[nrdivizori] >= A)
							out << divizori[nrdivizori] << " ";
						nrdivizori++;
					}
				}
			}
		}
	}
	return 0;
}