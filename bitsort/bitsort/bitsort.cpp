#include <iostream>
#include <bitset>
using namespace std;

bitset<300001> MyBitset;
int n, x;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		MyBitset[x] = 1;
	}
	for (int i = 0; i <= 300000; i++)
		if (MyBitset[i] == 1)
			cout << i << " ";
	return 0;
}