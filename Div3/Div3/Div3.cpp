#include <fstream>
using namespace std;
ifstream in("div3.in");
ofstream out("div3.out");
int suma_cifre(int n)
{
    int sumcif=0;
    while (n != 0)
    {
        sumcif = sumcif+n % 10;
        n = n / 10;
    }
    return sumcif;
}

int main()
{
    int n, x;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (suma_cifre(x) % 3 == 0)
        {
            out << x << " ";
        }
        
    }
}