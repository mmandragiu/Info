#include <fstream>
#include <algorithm>
using namespace std;

ifstream in("caca.in");
ofstream out("caca.out");

int a[100001], b[100001], c[200001], n, m, x, k;

int main()
{
    k = 1;
    in >> x >> n;
    for (int i = 1; i <= n; i++) {
        in >> a[i];
        c[k] = a[i];//punem intr-un vector toate elementele comune si necomune
        k++;
    }
    in >> m;
    for (int i = 1; i <= m; i++)
    {
        in >> b[i];
        c[k] = b[i];
        k++;
    }
    sort(c + 1, c + k + 1);//sortam vectorul pentru a avea elementele in ordine crescatoare si pentru a gasi elementele care se repeta
    for (int i = 1; i <= k; i++)
    {
        if (c[i - 1] != c[i] && c[i] != c[i + 1])//verificam daca numarul este diferit de vecinii lui, adica daca este unic si apare intr-unul dintre vectori si numai in el
        {
            if (c[i] % x == 0)//daca a trecut testul anterior, verificam daca este multiplu de x
                out << c[i] << " ";
        }
    }
    return 0;
}
