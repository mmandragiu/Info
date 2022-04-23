#include <fstream>
#include <math.h>
using namespace std;

int main()
{
    ifstream in("alarma.in");
    ofstream out("alarma.out");
    int x, y, linii[10], coloane[10], h, m, cnt, min = 1000000000, calorii, hcurent, mincurent, hfinal, mfinal;
    for (int i = 0; i <= 9; i++)
    {
        in >> x >> y;
        linii[i] = x, coloane[i] = y;
    }
    in >> cnt;
    h = cnt / 100;
    m = cnt % 100;
    calorii = (abs(linii[h / 10] - linii[h % 10]) + abs(coloane[h / 10] - coloane[h % 10])) + (abs(linii[h % 10] - linii[m / 10]) + abs(coloane[h % 10] - coloane[m / 10])) + (abs(linii[m / 10] - linii[m % 10]) + abs(coloane[m / 10] - coloane[m % 10]));
    if (calorii < min)
        min = calorii;
    mincurent = m + 60;
    hcurent = h;
    for (int i = 1; i <= 4; i++)
    {
        if (hcurent <= 99)
        {
            calorii = (abs(linii[hcurent / 10] - linii[hcurent % 10]) + abs(coloane[hcurent / 10] - coloane[hcurent % 10])) + (abs(linii[hcurent % 10] - linii[m / 10]) + abs(coloane[hcurent % 10] - coloane[m / 10])) + (abs(linii[m / 10] - linii[m % 10]) + abs(coloane[m / 10] - coloane[m % 10]));
            if (calorii < min)
            {
                min = calorii;
                hfinal = hcurent;
                mfinal = m;
            }
        }
        hcurent += 24;
        if (mincurent <= 99 && hcurent <= 99)
        {
            calorii = (abs(linii[hcurent / 10] - linii[hcurent % 10]) + abs(coloane[hcurent / 10] - coloane[hcurent % 10])) + (abs(linii[hcurent % 10] - linii[mincurent / 10]) + abs(coloane[hcurent % 10] - coloane[mincurent / 10])) + (abs(linii[mincurent / 10] - linii[mincurent % 10]) + abs(coloane[mincurent / 10] - coloane[mincurent % 10]));
            if (calorii < min)
            {
                min = calorii;
                hfinal = hcurent;
                mfinal = mincurent;
            }
        }
    }
    out << min << '\n' << hfinal / 10 << hfinal % 10 << mfinal / 10 << mfinal % 10;
}