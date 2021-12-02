#include <fstream>
using namespace std;

ifstream cin("pozmax.in");
ofstream cout("pozmax.out");

int main()
{
    int n, poz_p = 0, poz_u = 0, max = -2000000000;
    float x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
            poz_p = i;
            poz_u = i;
        }
        else
        {
            if (x == max)
            {
                poz_u = i;
            }
        }
    }
    cout << poz_p << " " << poz_u;
    return 0;
}