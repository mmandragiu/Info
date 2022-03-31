#include <fstream>
using namespace std;

void sortare(long long v[], long long n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for(int j=i+1;j<n;j++)
            if (v[i] < v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    }
}

const int N = 8e5;
long long v[N + 1], x, turn, n, c, cif[10], stickerr, stickerv, maxx1, maxx2, stickert, poz_curent, max2, max1, f[N+1];

int main()
{
    ifstream in("album.in");
    ofstream out("album.out");
    in >> c >> n;
    if (c == 1)
    {
        for (int i = 1; i <= n; i++)
            in >> x;
        int i = 0;
        while (x)
        {
            cif[i] = x % 10;
            i++;
            x /= 10;
        }
        sortare(cif, i);
        out << cif[1] << " " << cif[0];
    }
    if (c == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            in >> v[i];
            f[v[i]] = 0;
        }
        turn = 1;
        while (stickert < n)
        {
            bool found = false;
            for (int i = 1; i <= n; i++)
            {
                if (f[v[i]] == 0)
                {
                    f[v[i]] = 1;
                    if (turn % 2 == 1)
                        stickerv++, stickert++;
                    else
                        stickerr++,stickert++;
                    poz_curent = i;
                    break;
                }
            }
            int copie = v[poz_curent];
            int cifre = 0;
            while (copie)
            {
                cif[cifre] = copie % 10;
                cifre++;
                copie /= 10;
            }
            sortare(cif, cifre);
            maxx1 = cif[0], maxx2 = cif[1];
            for (int j = poz_curent + 1; j <= n; j++)
            {
                max1 = -1, max2 = -1;
                if (f[v[j]] == 0)
                {
                    copie = v[j];
                    while (copie)
                    {
                        cif[copie%10]++;
                        copie /= 10;
                    }
                    if (cif[max1] != 0 && cif[max2 != 0])
                        found = true;
                }
                if (max1 != -1 && max2 != -1)
                {
                    if (turn % 2 == 1)
                        stickerv++;
                    else
                        stickerr++;
                    stickert++;
                    f[v[j]] = 1;
                }
            }
            turn++;
        }
        if (stickerv < stickerr)
            out << "R" << '\n'<< stickerr;
        if (stickerv > stickerr)
            out << "V" << '\n'<< stickerv;
        if (stickerv == stickerr)
            out << "V R" << '\n'<< stickerv;
    }
    return 0;
}