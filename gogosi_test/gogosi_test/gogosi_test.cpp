#include <iostream>
#include <fstream>
using namespace std;

ifstream in("gogosi.in");
ofstream out("gogosi.out");

int maxcozi[1000000] = { 0 };
int main()
{
	int n, x, nrcozi = 0, left, right, mid, gasit;
	in >> n;
	if (n >= 1) {
		in >> x;
		maxcozi[0] = x;
	}
	for (int i = 2; i <= n; i++) {
		in >> x;
		left = 0;
		right = nrcozi;
		gasit = false;
		while (left <= right) {
			mid = (left + right) / 2;
			if (maxcozi[mid] == x)
			{
				gasit = true;
				break;
			}
			if (maxcozi[mid] > x)
				left = mid + 1;
			else
				right = mid - 1;
		}
		if (!gasit) {
			if (right >= 0 && maxcozi[right] <= x)
			{
				maxcozi[right] = x;
			}
			else if (maxcozi[left] <= x && left <= nrcozi)
			{
				maxcozi[left] = x;
			}
			else
			{
				nrcozi++;
				maxcozi[nrcozi] = x;
			}
		}
	}

	nrcozi++;

	out << nrcozi;
}