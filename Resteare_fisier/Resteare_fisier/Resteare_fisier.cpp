#include <iostream>
#include <fstream>

using namespace std;

ifstream in("fisier.in");
ofstream out("fisier.out");

int main()
{
	int n, x;
	in >> n;
	for (int i = 0; i < n; i++) {
		in >> x;
		out << x << " ";
	}
	out << endl;
	in.seekg(0);
	in >> n;
	for (int i = 0; i < n; i++) {
		in >> x;
		out << x << " ";
	}
	out << endl;
}