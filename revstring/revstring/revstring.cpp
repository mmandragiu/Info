#include <iostream>
#include <sstream>
#include <string>
using namespace std;

const int nmax = 1e9 + 7;
const int NMAX = 1e6;
string s;
int n, f[128];
unsigned long long p,p1;

int main()
{
    p = 1, p1 = 1;
    cin >> n;
    cin >> s;
    cout << (n * n / 4 + 1) % nmax;
    /*for (int i = 0; i < n; i++)
        f[s[i]]++;
    for (int i = 97; i <= 122; i++)
    {
        for (int j = 1; j <= f[i]; j++)
            p = p * j;
    }
    for (int i = 1; i <= n; i++)
        p1 *= i;
    cout << ((p1 % nmax) / (p % nmax)) % nmax;
    return 0;*/
}