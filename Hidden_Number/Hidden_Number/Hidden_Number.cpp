#include <fstream>
using namespace std;

ifstream in("hidden_number.in");
ofstream out("hidden_number.out");

int main()
{
	int nr = 0, suma = 0, x;
	while (in >> x)
	{
		nr++;
		suma += x;
	}
	if (suma % nr == 0)
		out << suma / nr;
	else
		out << -1;
}