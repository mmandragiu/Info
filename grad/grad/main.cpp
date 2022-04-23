#include <fstream>

using namespace std;

short n, f[6631], grad, cuv, grupe;
char c, prevc;

int main()
{
	ifstream in("grad.in");
	ofstream out("grad.out");
	in >> n;
	for (int i = 1; i <= n; i++)
	{
		in >> c;
		prevc = c;
		if (c != ' ')
		{
			if ((char)prevc == ' ')
				f[grad]++, grad = 0;
			grad += (int)c - 96;
		}
		else
			if ((int)prevc >= 97 && (int)prevc <= 122)
				cuv++;
	}
	out << cuv << '\n';
	for (int i = 1; i <= 6631; i++)
		if (f[i])
			grupe++;
	out << grupe;
}