#include <fstream>
using namespace std;

const int N = 1e5;
long long v[N + 1], cmmdc_prefix[N + 1], cmmdc_sufix[N + 2], g, n, maxim, c, nouv[N + 1];

long long cmmdc(long long a, long long b)
{
    long long r;
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void prelucrare()
{
    for (int i = 1; i <= n; i++)
        cmmdc_prefix[i] = cmmdc(cmmdc_prefix[i - 1], v[i]);
    for (int i = n; i > 0; i--)
        cmmdc_sufix[i] = cmmdc(cmmdc_sufix[i + 1], v[i]);
}

long long cerinta1()
{
    long long rezultat = v[1];
    for (int i = 2; i <= n; i++)
        rezultat = cmmdc(rezultat, v[i]);
    return rezultat;
}

long long cerinta2()
{
    for (int i = 1; i <= n; i++) {
        g = cmmdc(cmmdc_prefix[i - 1], cmmdc_sufix[i + 1]);
        if (g > maxim)
            maxim = g;
    }
    return maxim;
}

long long cerinta3()
{
    int copien;
    for (int i = 1; i < n; i++)
    {
        for (int i = 1; i <= n; i++)
            cmmdc_sufix[i] = 0;
        for (int i = 1; i <= n; i++)
            cmmdc_prefix[i] = 0;
        copien = (int)n;
        for (int i = 1; i <= copien; i++)
            nouv[i] = v[i];
        for (int j = i + 1; j <= copien; j++)
            nouv[j - 1] = nouv[j];
        copien--;
        for (int j = 1; j <= n; j++)
            cmmdc_prefix[j] = cmmdc(cmmdc_prefix[j - 1], nouv[j]);
        for (int j = n; j > 0; j--)
            cmmdc_sufix[j] = cmmdc(cmmdc_sufix[j + 1], nouv[j]);
        for (int i = 1; i <= copien; i++)
        {
            g = cmmdc(cmmdc_prefix[i - 1], cmmdc_sufix[i + 1]);
            if (g > maxim)
                maxim = g;
        }
    }
    return maxim;
}

int main()
{
    ifstream in("cmmdc.in");
    ofstream out("cmmdc.out");
    in >> c >> n;
    for (int i = 1; i <= n; i++)
        in >> v[i];
    prelucrare();
    if (c == 1)
        out << cerinta1();
    if (c == 2)
        out << cerinta2();
    if (c == 3)
        out << cerinta3();
}