
#include <fstream>
using namespace std;

int gg, v[10000], v1[10000], n, maxx, pozmax, pozmaimic = -1;
int main()
{
	ifstream in("remi.in");
	ofstream out("remi.out");
	in >> gg >> n;

	for (int i = 0; i < n; i++)
	{
		in >> v[i];
		if (v[i] > maxx)
		{
			maxx = v[i];
			pozmax = i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1 && v[i] < v[i + 1] && pozmaimic == -1) {
			pozmaimic = i;
		}
	}

	if (gg >= maxx)
	{
		v1[0] = maxx;
		for (int i = 0; i < n; i++) {
			if (i < pozmax)
				v1[i + 1] = v[i];
			else if (i > pozmax)
				v1[i] = v[i]; // De verificat
		}

		if (pozmaimic > -1) {
			while (pozmaimic < n - 1 && v[pozmaimic] < v[pozmaimic + 1]) {
				int tmp = v[pozmaimic + 1];
				v[pozmaimic + 1] = v[pozmaimic];
				v[pozmaimic] = tmp;
				pozmaimic++;
			}
		}
		int vectorales = -1, i = 0;
		while (vectorales == -1 && i < n) {
			if (v[i] > v1[i])
				vectorales = 0;
			else if (v1[i] > v[1])
				vectorales = 1;
			else
				i++;
		}
		out << gg;
		if (vectorales < 1)
			for (int i = 0; i < n; i++)
				out << v[i];
		else
			for (int i = 0; i < n; i++)
				out << v1[i];
	}
	else
	{
		if (pozmax == 0)
		{
			if (pozmaimic > -1) {
				while (pozmaimic < n - 1 && v[pozmaimic] < v[pozmaimic + 1]) {
					int tmp = v[pozmaimic + 1];
					v[pozmaimic + 1] = v[pozmaimic];
					v[pozmaimic] = tmp;
					pozmaimic++;
				}
			}
			bool ggafisat = false;
			for (int i = 0; i < n; i++)
			{
				if (ggafisat)
					out << v[i];
				else
					if (v[i] > gg)
						out << v[i];
					else
					{
						out << gg;
						out << v[i];
						ggafisat = true;
					}
			}
			if (!ggafisat)
				out << gg;
		}
		else
		{
			out << maxx;
			for (int i = pozmax; i < n - 1; i++)
				v[i] = v[i + 1];
			n--;
			bool ggafisat = false;
			for (int i = 0; i < n; i++)
			{
				if (ggafisat)
					out << v[i];
				else
					if (v[i] > gg)
						out << v[i];
					else
					{
						out << gg;
						out << v[i];
						ggafisat = true;
					}
			}
			if (!ggafisat)
				out << gg;

		}
	}
	return 0;
}