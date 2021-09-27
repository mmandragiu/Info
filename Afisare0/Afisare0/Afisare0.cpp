#include <iostream>

int main()
{
	int v[1000], n, ultimulelement;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i];
		if (i + 1 == n)
			ultimulelement = v[i];
	}	
	for (int i = 0; i < n; i++)
		if (v[i] % ultimulelement == 0)
			std::cout << v[i] << " ";
}