#include <iostream>
using namespace std;

void dublare1(int& n)
{
    int copien = 0, x = 1, primcif = 0;
    copien = n;
    while (copien)
    {
        primcif = copien % 10;
        copien /= 10;
        x = x * 10;
    }
    n = n + x * primcif;
}

int main()
{
    int n;
    cin >> n;
    dublare1(n);
    cout << n;
}