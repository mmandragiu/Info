#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream in("impletire.in");
	ofstream out("impletire.out");
	int a, b, cifrea[9] = { 0 }, cifreb[9] = { 0 }, nrcifrea = 0, nrcifreb = 0, egale = 0, ultimacifraegala = 0;
	in >> a >> b;
	while (a > 0) {
		cifrea[nrcifrea] = a % 10;
		nrcifrea++;
		a /= 10;
	}
	while (b > 0) {
		cifreb[nrcifreb] = b % 10;
		nrcifreb++;
		b /= 10;
	}
	while (nrcifrea > 0 && nrcifreb > 0) {
		if (cifrea[nrcifrea - 1] > cifreb[nrcifreb - 1])
		{
			if (egale > 0)
			{
				nrcifreb += egale;
				egale = 0;
			}
			out << cifrea[nrcifrea - 1];
			nrcifrea--;
		}
		else if (cifrea[nrcifrea - 1] < cifreb[nrcifreb - 1])
		{
			if (egale > 0)
			{
				nrcifrea += egale;
				egale = 0;
			}

			out << cifreb[nrcifreb - 1];
			nrcifreb--;
		}
		else
		{
			if (cifrea[nrcifrea - 1] >= ultimacifraegala)
			{
				ultimacifraegala = cifrea[nrcifrea - 1];
				out << cifrea[nrcifrea - 1];
				nrcifrea--;
				nrcifreb--;
				egale++;

			}
			else
			{
				ultimacifraegala = cifrea[nrcifrea - 1];
				nrcifrea++;
				egale = 0;
			}
		}
	}
	if (nrcifrea > 0) {
		if (egale > 0)
		{
			nrcifreb += egale;

			if (cifrea[nrcifrea - 1] > cifreb[nrcifreb - 1])
			{
				for (int i = nrcifrea - 1; i >= 0; i--)
					out << cifrea[i];

				for (int i = nrcifreb - 1; i >= 0; i--)
					out << cifreb[i];
			}
			else
			{
				for (int i = nrcifreb - 1; i >= 0; i--)
					out << cifreb[i];

				for (int i = nrcifrea - 1; i >= 0; i--)
					out << cifrea[i];
			}
		}
		else
			for (int i = nrcifrea - 1; i >= 0; i--)
				out << cifrea[i];

	}
	else
		if (nrcifreb > 0) {
			if (egale > 0)
			{
				nrcifrea += egale;

				if (cifreb[nrcifreb - 1] > cifrea[nrcifrea - 1])
				{
					for (int i = nrcifreb - 1; i >= 0; i--)
						out << cifreb[i];

					for (int i = nrcifrea - 1; i >= 0; i--)
						out << cifrea[i];
				}
				else
				{
					for (int i = nrcifrea - 1; i >= 0; i--)
						out << cifrea[i];

					for (int i = nrcifreb - 1; i >= 0; i--)
						out << cifreb[i];
				}
			}
			else
				for (int i = nrcifreb - 1; i >= 0; i--)
					out << cifreb[i];
		}
}