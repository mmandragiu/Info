#include <fstream>
using namespace std;

int v[101], n, c1, c2, f[100001];

int main()
{
    ifstream in("munte.in");
    ofstream out("munte.out");
    in >> n;
    for (int i = 1; i <= n; i++)
        in >> v[i];
    for (int i = 2; i <= n - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
        {
            c1++;
            f[v[i]]++;//1=varf al secventei de tip munte
                       //0=nu este varf al unei secv de tip munte
        }
    }
    out << c1 << '\n';
    bool found = true;
    for (int i = 2; i < n; i++)
    {
        if (f[v[i]] > 0)
        {
            f[v[i]]--;
            for (int j = i; j < n; j++)
                v[j] = v[j + 1];
            n--;
            i--;
            c2++;
        }
    }
    while (found)
    {
        found = false;
        for (int i = 2; i < n; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                found = true;
                f[v[i]]++;
                c2++;
            }
        }
        for (int i = 2; i < n; i++)
        {
            if (f[v[i]] > 0)
            {
                f[v[i]]--;
                for (int j = i; j < n; j++)
                    v[j] = v[j + 1];
                n--;
                i--;
            }
        }
    }
    out << c2 << '\n' << n;
    return 0;
}