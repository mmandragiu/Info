#include <fstream>
using namespace std;

int n, p3[200000], p5[200000], p3si5[400000], contor1, contor2, x, y, k, aux, putere3, putere5, exp3, exp5, indice1, indice2, prev1, prev2;

int main()
{
    ifstream in("3si5.in");
    ofstream out("3si5.out");
    bool dif = true;
    in >> n;
    int i = 0, j = 0;
    while (x < n)
    {
        i++;
        aux = i;
        indice1++;
        contor1 = 0;
        while (aux)
        {
            dif = true;
            putere3 = 1;
            exp3 = 0;
            contor1++;
            while (putere3 * 3 <= aux)
            {
                putere3 *= 3;
                exp3++;
            }
            aux -= putere3;
            if (contor1 == 1)
                prev1 = exp3;
            else
                if (prev1 == exp3)
                    dif = false;
        }
        if (aux == 0 && dif == true)
        {
            p3[x] = i;
            x++;
        }
    }
    while (y < n)
    {
        j++; 
        aux = j;
        indice2++;
        contor2 = 0;
        while (aux)
        {
            dif = true;
            putere5 = 1;
            exp5 = 0;
            contor2++;
            while (putere5 * 5 <= aux)
            {
                putere5 *= 5;
                exp5++;
            }
            aux -= putere5;
            if (contor2 == 1)
                prev2 = exp5;
            else
                if (prev2 == exp5)
                   dif = false;
        }
        if (aux == 0 && dif == true)
        {
            p5[y] = j;
            y++;
        }
    }
    i = 0, j = 0;
    while (i <= x - 1 && j <= y - 1)
    {
        if (p3[i] <= p5[j])
        {
            p3si5[k] = p3[i];
            k++;
            i++;
        }
        else
        {
            p3si5[k] = p5[j];
            k++;
            j++;
        }
    }
    while (i <= x - 1)
    {
        p3si5[k] = p3[i];
        k++;
        i++;
    }
    while (j <= y - 1)
    {
        p3si5[k] = p5[j];
        k++;
        j++;
    }
    for (int i = 0; i < k; i++)
        out << p3si5[i] << '\n';
    return 0;
}