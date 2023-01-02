#include <iostream>
using namespace std;

int a[55][55], n, m;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if ((i == 1 && j <= m) || (i == n && j <= m) || (j == 1 && i <= n) || (j == m && i <= n))
				a[i][j] = a[n][m];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}