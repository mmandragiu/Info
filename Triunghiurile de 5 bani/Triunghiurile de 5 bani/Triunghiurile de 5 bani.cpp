#include <fstream>
using namespace std;

int main()
{
    ifstream cin("triunghiuri.in");
    ofstream cout("triunghiuri.out");
    unsigned long long int n, valoare = 0,total=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        valoare = valoare + i;
        total += valoare;
    }
    total += n;
    total *= 5;
    cout << total / 100 << " " << (total % 100);
    return 0;
}