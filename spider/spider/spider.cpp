#include <fstream>
using namespace std;

const int NMAX = 10000;
int a[101][101], n, k, d, zi, pozcurent, v[NMAX], cnt, dist, capat1[NMAX],capat2[NMAX], i, j;
bool f[101][101];

int main()
{
    ifstream in("spider.in");
    ofstream out("spider.out");
    in >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            in >> d;
            a[i][j] = d;
            a[j][i] = d;
        }
    }
    bool gata = false;
    pozcurent = k;
    while (!gata)
    {
        zi++;
        if (zi % 2 == 1)
        {
            i = pozcurent;
            pozcurent = (pozcurent + 1) % n;
            if (pozcurent == 0)
                pozcurent = n;
            if (f[i][pozcurent] == true || f[pozcurent][i]==true)
            {
                gata = true;
                break;
            }
            f[i][pozcurent] = true;
            f[pozcurent][i] = true;
            j = pozcurent;
            cnt++;
            dist = a[i][j];
            v[cnt] = dist;
            capat1[cnt] = i;
            capat2[cnt] = j;
        }
        else
        {
            i = pozcurent;
            pozcurent += 2;
            pozcurent %= n;
            if (pozcurent == 0)
                pozcurent = n;
            if (f[i][pozcurent] == true || f[pozcurent][i]==true)
            {
                gata = true;
                break;
            }
            f[i][pozcurent] = true;
            f[pozcurent][i] = true;
            j = pozcurent;
            cnt++;
            dist = a[i][j];
            v[cnt] = dist;
            capat1[cnt] = i;
            capat2[cnt] = j;
        }
    }
    zi--;
    out << zi << " " << i << '\n';
    for (i = 1; i < cnt; i++)
    {
        for (j = i + 1; j <= cnt; j++)
        {
            if (v[i] < v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                aux = capat1[i];
                capat1[i] = capat1[j];
                capat1[j] = aux;
                aux = capat2[i];
                capat2[i] = capat2[j];
                capat2[j] = aux;
            }
        }
    }
    for (i = 1; i <= cnt; i++)
    {
        out << v[i] << " ";
        int minn = capat1[i] < capat2[i] ? capat1[i] : capat2[i];
        int maxx = capat1[i] > capat2[i] ? capat1[i] : capat2[i];
        out << minn << " " << maxx << '\n';
    }
    return 0;
}