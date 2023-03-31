#include <iostream>
#include <cstring>
#define _SCL_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;

int main()
{
	char s[101], a[11], b[11], *p, aux[101];
	cin >> a >> b;
	cin.get();
	cin.get(s, 101);
	p = strstr(s, a);
	while (p != NULL)
	{
		strcpy(aux, p + strlen(a));
		strcpy(p, b);
		p = strstr(s, a);
	}
	cout << s;
	return 0;
}