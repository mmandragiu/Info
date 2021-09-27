#include <fstream>

using namespace std;
ifstream in("sumacifre.in");
ofstream out("sumacifre.out");

int main()
{
    int n;
	char sir[1000];
	int suma = 0;
	in>>n;
	in.getline(sir, n);
	int i = 0;
	while (i<20) {
		if (sir[i] >= 48 && sir[i] <= 57) {
			out<<sir[i];
			// suma += sir[i] - 48;
		}
		i++;
	}
	// out << suma;
	return 0;
}
