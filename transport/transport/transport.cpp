#include <iostream>
#include <fstream>

using namespace std;

ifstream in("transport.in");
ofstream out("transport.out");

const int N = 16000;
int v[N + 1];
int n;

int cautare_binara(int k) {
    int pas = 1;
    while (pas <= n) {
        pas *= 2;
    }
    pas /= 2;
    int ans = 0;
    while (pas > 0) {
        if (ans + pas <= n && v[ans + pas] <= k) {
            ans += pas;
        }
        pas /= 2;
    }
    return ans;
}

int main()
{
    long long k, j = 1, s = 0, maxx = 0;
    in >> n >> k;
    for (int i = 1; i <= n; i++)
        in >> v[i];
    while (s < n)
    {
        s += j;
        j++;
    }
    int x = 1, poz = 1, contor = -1;
    for (int i = 1; i <= j; i++)
    {
        s = 0;
        for (poz; poz <= x + i + contor; poz++)
        {
            s += v[poz];
        }
        x++;
        contor++;
        if (maxx < s)
            maxx = s;
    }
    out << maxx;
    return 0;
}