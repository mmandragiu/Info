#include <iostream>

int main()
{
	int n, copien, aparitii=0, primcif;
	std::cin >> n;
	copien = n;
	if (n == 0)
	{
		std::cout << 1;
		return 0;
	}
	while (n)
	{
		if (n / 10 == 0)
		{
			primcif = n;
			break;
		}
		else
			n = n / 10;
	}
	while (copien)	
	{
		if (copien % 10 == primcif)
			aparitii++;
		copien = copien / 10;
	}
	std::cout << aparitii;
	return 0;
}