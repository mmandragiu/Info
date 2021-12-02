#include <iostream>
using namespace std;

void stergere(int& n)
{
    while (n % 10 == 0)
        n /= 10;
}

int main()
{
    int n;
    cin >> n;
    stergere(n);
    cout << n;
}