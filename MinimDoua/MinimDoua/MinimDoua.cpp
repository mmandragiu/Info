#include <fstream>
#include <algorithm>
using namespace std;

ifstream in("minimdoua.in");
ofstream out("minimdoua.out");

int main()
{
	int n, x, minim1 = 100000010, minim2 = 100000010;
	in >> n;
	for (int i = 0; i < n; i++)
	{
		in >> x;
		if (x >= 10 && (x % 100) / 10 == x % 10)
		{
			if (x < minim1)
				minim2 = minim1, minim1 = x;
			else
				if (x < minim2)
					minim2 = x;
		}
	}
	if (minim2 == 100000010 || minim1 == 100000010)
		out << "numere insuficiente";
	else
		out << minim1 << " " << minim2;
	return 0;
}