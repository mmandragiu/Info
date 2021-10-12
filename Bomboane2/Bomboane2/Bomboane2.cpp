#include <fstream>
using namespace std;

ifstream in("bomboane2.in");
ofstream out("bomboane2.out");

long long int v[100000] = { 0 };

int main()
{
    int n, suma = 0, indice = 1,indice2=1,ture2=0,ture_min=1000000000,j,ture=0,x=0;
    in >> n;
    for (j = 0; j < n; j++)
        in >> v[j];
    bool finish = false;
    while (finish!=true)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] > indice2)
            {
                v[i] -= indice2;
                finish = false;
                indice2++;
            }
            else
            {
                finish = true;
                indice2 = indice2 - i;
                break;
            }
        }
        if (finish == true)
            break;
        else
            ture++;
    }
    x = n * ture;
    out << x*(x+1)/2;
}