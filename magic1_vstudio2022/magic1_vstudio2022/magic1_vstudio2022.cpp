#include <fstream>
using namespace std;

string v[1000];
char c;
int f[10], n, contor;

int main()
{
    ifstream in("magic1.in");
    ofstream out("magic1.out");
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> c;
        if ((char)c >= 97 && (char)c <= 122)
        {
            c = (char)(c - 32);
            v[contor] = c;
            contor++;
        }
        if (c >= 48 && c <= 57)
        {
            c -= 48;
            f[c]++;
        }
    }
    for (int i = 0; i < contor; i++)
        out << v[i];
    out << '\n';
    if (f[0] != 0)
    {
        for (int i = 1; i <= 9; i++)
        {
            if (f[i] != 0)
            {
                out << i;
                f[i]=0;
                break;
            }
        }
        out << 0;
        for (int i = 1; i <= 9; i++)
        {
            if (f[i] != 0)
                out << i;
        }
    }
    else
    {
        for (int i = 1; i <= 9; i++)
            if (f[i])
                out << i;
    }
}