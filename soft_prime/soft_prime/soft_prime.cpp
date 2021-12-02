#include <fstream>
#include <stdlib.h>
using namespace std;

//int Eratostene[1000001] = { 0 };

ifstream in("soft_prime.in");
ofstream out("soft_prime.out");

void Sortare(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
                swap(v[i], v[j]);
        }
    }
}

bool Prim(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d * d <= n)
    {
        if (n % d == 0)
            return false;
        d++;
    }
    return true;
}

int main()
{
    /*Eratostene[0] = 1, Eratostene[1] = 1;
    for (int i = 2; i < sqrt(1000000); i++)
    {
        if (Eratostene[i] == 0)
            for (int j = 2; j <= 1000000 / i; j++)
                Eratostene[j*i] = 1;  
    }*/
    int n, x, contor = 0;
    in >> n;
    int* prime = (int*)calloc(1, sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (Prim(x)== true)
        {
            *(prime + contor) = x; 
            contor++;
            prime = (int*)realloc(prime, (contor+1)*sizeof(int));
        }
    }
    Sortare(prime, contor);
    for (int i = 0; i < contor; i++)
        out << prime[i] << " ";
    return 0;  
}