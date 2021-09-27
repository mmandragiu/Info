#include <fstream>
using namespace std;
ifstream cin("maxnr.in");
ofstream cout("maxnr.out");

int main()
{
    int n, v[10] = { 0 };
    cin >> n;
    while (n)
    {
        v[n % 10]++;
        n /= 10;
    }
    for (int i = 9; i >=0; i--)
    {
        if (v[i] != 0)
            for (int i2 = 1; i2 <= v[i]; i2++)
                cout << i;
    }
}