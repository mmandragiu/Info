#include <iostream>
using namespace std;

int NrDiv(int n)
{
    int div_pari = 0, d;
    for (d = 1; d * d < n; ++d)
    {
        if (n % d == 0)
        {
            if (d % 2 == 0)
                div_pari++;
            if ((n / d) % 2 == 0)
                div_pari++;
        }
    }
    if (d * d == n and d % 2 == 0)
        div_pari++;
    return div_pari;
}

int main()
{
    int a, b, nr_max_div_pari = 0, nr_cu_div_max[1002] = { 0 },contor=1,min=1000000000,max=-1;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (NrDiv(i) > nr_max_div_pari)
        {
            contor = 1;
            nr_max_div_pari = NrDiv(i);
            nr_cu_div_max[0] = { 0 };
            nr_cu_div_max[contor] = i;
            contor++;
        }
        else {
            if (NrDiv(i) == nr_max_div_pari)
            {
                nr_cu_div_max[contor] = i;
                contor++;
            }
        }
    }
    cout << nr_max_div_pari << " ";
    for (int i = 1; i <= contor-1; ++i)
    {
        if (nr_cu_div_max[i] > max)
            max = nr_cu_div_max[i];
        if (nr_cu_div_max[i] < min)
            min = nr_cu_div_max[i];
    }
    cout << min << " " << max;
    return 0;
}