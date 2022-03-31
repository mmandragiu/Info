#include <fstream>
using namespace std;

const int N = 23;
const int ND = 4;//nr de deplasari
const int dl[] = { 0,1,0,-1 };
const int dc[] = { 1,0,-1,0 }; 

int a[N + 1][N + 1];
bool marcat[N + 2][N + 2];

int main()
{
	ifstream in("spirala.in");
	ofstream out("spirala.out");
	int n;
	//citirea datelor
	in >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			in >> a[i][j];
	in.close();
	//bordarea
	for (int i = 1; i <= n; i++)//col 0 si col n+1
		marcat[i][0] = marcat[i][n + 1] = true;
	for (int j = 1; j <= n; j++)//linia 0 si linia n+1
		marcat[0][j] = marcat[n + 1][j] = true;
	int l = 1, c = 1, deplasare = 0;//dc=deplasarea curenta
	for (int i = 0; i < n * n; i++)
	{
		out << a[l][c] << " ";//afisez elem curent
		marcat[l][c] = true;//marchez poz curenta din matrice ca inaccesibila
		if (marcat[l + dl[deplasare]][c + dc[deplasare]])
		{
			deplasare++;
			if (deplasare == ND)
				deplasare = 0;
		}
		l += dl[deplasare];
		c += dc[deplasare];
	}
	out.close();
}