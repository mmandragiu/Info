#include <fstream>
using namespace std;

int main()
{
	ifstream in("alo.in");
	ofstream out("alo.out");
	int e, n, nr, d;
	in >> e >> n;
	for (int i = 1; i <= n; i++)
	{
		in >> nr >> d;
		if (nr / 10000 == 2)
		{
			if (nr % 10 == 5)
				e = e + d;
			if (nr % 10 == 9)
				continue;
		}
		if(nr/10000==1)
		{
			if (nr % 10 == 5)
				e = e - 2 * d;
			if (nr % 10 == 9)
				continue;
		}
	}
	out << e;
	return 0;
}