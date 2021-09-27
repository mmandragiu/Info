#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("pozitiex.in");
ofstream cout("pozitiex.out");


int main()
{
	int x, n, v[10000];
	bool found = true;
	cin >> x >> n;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v, v + n);
	for (int i = 0; i <= n; i++)
		if (v[i] == x)
		{
			cout << i + 1;
			found = true;
			break;
		}
		else
			found = false;
	if (found == false)
		cout << "NU EXISTA";
	return 0;
}