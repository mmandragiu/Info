#include <fstream>

using namespace std;

int main()
{
    ifstream in("subsecventa.in");
    ofstream out("subsecventa.out");
    int n, x, sp[10001] = { 0 }, st = 0, drmax = 0, resturi[10001];
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        sp[i] = sp[i - 1] + x;
        resturi[i] = sp[i] % n;
    }
    for (int j = n; j >= 1; j--)
    {
        bool found = false;
        for (int i = j; i >= 1; i--)
        {
            if (resturi[j] == resturi[i - 1])
            {
                found = true;
                drmax = j;
                st = i;
            }
        }
        if (found)
            break;
    }
    out << st << " " << drmax;
    return 0;
}
