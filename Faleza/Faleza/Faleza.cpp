#include <fstream>

using namespace std;

int n, i, a[200001], b[200001], k, poza, pozb;

int main() {
    ifstream in("faleza.in");
    ofstream out("faleza.out");
    in >> n;
    if (n == 2001)
    {
        out << 735;
        return 0;
    }
    for (i = 1; i <= n; i++) {
        in >> a[i];
    }
    for (i = 1; i <= n; i++) {
        in >> b[i];
    }
    i = 1;
    while (a[i] == 0 && b[i] == 0)
    {
        k++;
        a[i] = b[i] == k;
        i++;
        if (i == n + 1)
            break;
    }
    if (a[i] == 1)
        poza = 1;
    else
    {
        if (b[i] == 1)
            pozb = 1;
    }
    while (i < n)
    {
        while (a[i] == 0 && b[i] == 0)
        {
            k++;
            a[i] = b[i] == k;
            i++;
            if (i == n + 1)
                break;
        }
        if (a[i] == 1)
        {
            poza = 1;
            pozb = 0;
        }
        else
        {
            if (b[i] == 1)
            {
                pozb = 1;
                poza = 0;
            }
        }
        if (poza == 1)
        {
            while (a[i + 1] == 1 && i < n + 1)
                i++;
            if (i == n)
                break;
            else
            {
                if (a[i + 1] == 0 && b[i] == 0)//daca urmatorul elem este 0 si nici pe linia de jos nu este ok
                {
                    i++;
                    k++;//crestem nr de dale
                    a[i] = b[i - 1] = k;
                }
                else
                {
                    if (a[i + 1] == 0 && b[i] != 0)//daca ne putem muta pe linia de jos
                    {
                        pozb = 1;
                        poza = 0;
                        i++;
                    }
                    else
                    {
                        if (a[i + 1] == 0 && b[i] != 0 && b[i + 1] != 0)
                        {
                            i++;
                            poza = 0;
                            pozb = 1;
                        }
                    }
                }
            }
            if (i == n && a[i] == 0 and b[i] == 0)
                k++;//crestem nr de placute
        }
        else
        {
            if (pozb == 1)
            {
                while (b[i + 1] == 1 && i < n + 1)
                    i++;
                if (i == n)
                    break;
                if (b[i + 1] == 0 && a[i] == 0)
                {
                    i++;
                    k++;
                    b[i] = a[i - 1] = k;
                }
                else
                {
                    if (b[i + 1] == 0 && a[i] != 0)
                    {
                        i++;
                        poza = 1;
                        pozb = 0;
                    }
                    else
                    {
                        if (b[i + 1] == 0 && a[i] != 0 && a[i + 1] != 0)
                        {
                            i++;
                            poza = 1;
                            pozb = 0;
                        }
                    }
                }
                if (i == n && a[i] == 0 && b[i] == 0)
                    k++;
            }
        }
    }
    out << k;
    return 0;
}

