#include <fstream>
#include <cmath>
using namespace std;

ifstream in("numarspecial.in");
ofstream out("numarspecial.out");

int v[1000001];
bool prime[1000001] = { false };
int Eratostene[1000001] = { 0 };


int main()
{
    unsigned long long n, ordin1 = 0, ordin0 = 0,  ordinmax = 0, poz_prev = 0, poz_urm = 0, ordin = 0;
    in >> n;
    Eratostene[0] = 1, Eratostene[1] = 1;
    for (int i = 2; i < sqrt(1000000); i++)
    {
        if (Eratostene[i] == 0)
            for (int j = 2; j <= 1000000 / i; j++)
                Eratostene[j * i] = 1;
    }
    for (unsigned long long int i = 0; i < n; i++)
        in >> v[i];
    if (v[0] % 9 == 0)
        ordin0++;
    for (unsigned long long int i = 1; i < n; i++)
    {
        if (v[i] % 9 == 0) {
            ordin0++;
                if (Eratostene[v[i+1]] == 0 && Eratostene[v[i-1]] == 0)
                    ordin1++;
                poz_prev = i - 1;
                poz_urm = i + 1;
                while (Eratostene[v[poz_prev]] == 0 && Eratostene[v[poz_urm]] == 0 && poz_prev >= 1 && poz_urm <= n)
                {
                    ordin++;
                    poz_prev--;
                    poz_urm++;
                }
        }
        
        if (ordin > ordinmax) 
            ordinmax = ordin;
        ordin = 0;
    }
    out << ordin0 << '\n' << ordin1 << '\n' << ordinmax;
}