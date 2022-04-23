#include <fstream>
#include <string>
using namespace std;

short n, f[6631], grad, cuv, grupe;
char c, prevc;
string s;

int main()
{
	ifstream in("grad.in");
	ofstream out("grad.out");
	in >> n;
	getline(in, s);
	for (int i = 1; i <= n; i++)
	{
		if (s[i] != ' ')
		{
			if ((char)prevc == ' ')
				f[grad]++, grad = 0;
			grad += (int)s[i] - 96;
		}
		else
			if ((int)prevc >= 97 && (int)prevc <= 122)
				cuv++;
		prevc = s[i];
	}
	out << cuv << '\n';
	for (int i = 1; i <= 6631; i++)
		if (f[i])
			grupe++;
	out << grupe;
}