#include <fstream>
#include <cmath>
using namespace std;

int convert(long long n) {
    int dec = 0, i = 0, rem;

    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

bool Prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d * d <= n)
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}

long long a[19][19], noua[4][112], n, indice1, indice2, j, cnt;

int main()
{
    ifstream in("drepteprime.in");
    ofstream out("drepteprime.out");
    in >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            in >> a[i][j];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            noua[0][i] = noua[0][i] * 10 + a[i][j];
        }
        noua[0][i] = convert(noua[0][i]);
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
            noua[1][j] = noua[1][j] * 10 + a[i][j];
        noua[1][j] = convert(noua[1][j]);
    }
    for (int i = 0; i < n; i++)
        noua[2][indice1] = noua[2][0] * 10 + a[i][i];
    noua[2][indice1] = convert(noua[2][indice1]);
    indice1++;
    j = 1;
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
            noua[2][indice1] = noua[2][indice1] * 10 + a[i][i + j];
        noua[2][indice1] = convert(noua[2][indice1]);
        indice1++;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            noua[2][indice1] = noua[2][indice1] * 10 + a[i + j][j];
        noua[2][indice1] = convert(noua[2][indice1]);
        indice1++;
    }
    for (int i = 0; i < n; i++)
        noua[3][indice2] = noua[3][indice2] * 10 + a[i][n - i - 1];
    noua[3][indice2] = convert(noua[3][indice2]);
    indice2++;
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
            noua[3][indice2] = noua[3][indice2] * 10 + a[i + n - 1 - j][j];
        noua[3][indice2] = convert(noua[3][indice2]);
        indice2++;
    }
    for (int j = n - 2; j >= 0; j--)
    {
        for (int i = 0; i <= j; i++)
            noua[3][indice2] = noua[3][indice2] * 10 + a[i][j - i];
        noua[3][indice2] = convert(noua[3][indice2]);
        indice2++;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            if (Prim(noua[i][j]) == true)
                cnt++;
        }
    }
    out << cnt;
    return 0;
}