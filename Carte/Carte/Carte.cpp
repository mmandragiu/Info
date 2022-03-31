
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
	ifstream in("carte.in");
	ofstream out("carte.out");
	int n, v[10001] = { 0 }, pagsfarsit[10001] = { 0 }, zile = 0, nrmaxpagini = 0, primazinrmaxpagini = 1;
	int pagini[10001] = { 0 };
	in >> n;
	for (int i = 1; i <= n; i++)
	{
		in >> v[i];
		pagini[v[i]] = 1;

		if (pagini[v[i] + 1] == 1 || v[i] == n)
		{
			pagsfarsit[zile] = v[i];
			zile++;
		}
	}

	sort(pagsfarsit, pagsfarsit + zile);
	nrmaxpagini = pagsfarsit[0];
	for (int i = 1; i < zile; i++)
		if (pagsfarsit[i] - pagsfarsit[i - 1] > nrmaxpagini)
			nrmaxpagini = pagsfarsit[i] - pagsfarsit[i - 1];

	for (int i = 0; i < zile; i++) {
		if (i == 0)
		{
			if (pagsfarsit[i] == nrmaxpagini)
				break;
		}
		else if (pagsfarsit[i] - pagsfarsit[i - 1] == nrmaxpagini)
		{
			primazinrmaxpagini = i + 1;
			break;
		}
	}

	out << zile << " " << primazinrmaxpagini << " " << nrmaxpagini;
}