#include <fstream>
using namespace std;

int f[91], c, n, maxx, x, adrese[1001], coord, lcurent, cifcurent, coordcurent, vcoordonate[201];
char celula, litere[1001];
string numarlung;

int main()
{
    ifstream in("maya.in");
    ofstream out("maya.out");
    in >> c >> n;
    if (c == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            in >> celula >> x;
            f[(int)celula]++;
        }
        for (int i = 65; i <= 90; i++)
            maxx = f[i] > maxx ? f[i] : maxx;
        for (int i = 65; i <= 90; i++)
        {
            if (f[i] == maxx)
                out << (char)i << " ";
        }
    }
    if (c == 2)
    {
        for (int i = 1; i <= n; i++)
            in >> litere[i] >> adrese[i];
        for (int i = 1; i <= n; i++)
        {
            in >> coord >> numarlung;
            lcurent = litere[i];
            cifcurent = adrese[i];
            for (int j = 1; j <= coord; j++)
                vcoordonate[j] = numarlung[j - 1] - '0';
            for (int j = 1; j <= coord; j++)
            {
                coordcurent = vcoordonate[j];
                if (coordcurent == 1)
                    cifcurent++;
                if (coordcurent == 2)
                {
                    if ((int)lcurent % 2 == 1)
                        cifcurent++;
                    if (lcurent == 90)
                        lcurent = 65;
                    else
                        lcurent++;
                }
                if (coordcurent == 3)
                {
                    if ((int)lcurent % 2 == 0)
                        cifcurent--;
                    if (lcurent == 90)
                        lcurent = 65;
                    else
                        lcurent++;
                }
                if (coordcurent == 4)
                    cifcurent--;
                if (coordcurent == 5)
                {
                    if ((int)lcurent % 2 == 0)
                        cifcurent--;
                    if (lcurent == 65)
                        lcurent = 90;
                    else
                        lcurent--;
                }
                if (coordcurent == 6)
                {
                    if ((int)lcurent % 2 == 1)
                        cifcurent++;
                    if (lcurent == 65)
                        lcurent = 90;
                    else
                        lcurent--;
                }
            }
            out << (char)lcurent << cifcurent << '\n';
        }
    }
    in.close();
    out.close();
    return 0;
}