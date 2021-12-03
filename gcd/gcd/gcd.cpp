#include <fstream>
using namespace std;

ifstream cin("gcd.in");
ofstream cout("gcd.out");

int freca[1000001] = { 0 }, frecb[1000001] = { 0 }, maxx, Eratostene1[1000001], Eratostene2[1000001],c,nr;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> c;
        freca[c]++;
        if (c > maxx)
            maxx = c;
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> c;
        frecb[c]++;
        if (c > maxx) maxx = c;
    }
    for (int i = 1; i <= maxx; ++i)
    {
        for (int j = i; j <= maxx; j += i)
        {   
            if (freca[j] != 0)
                Eratostene1[i] = max(Eratostene1[i], j);
            if (frecb[j] != 0)
                Eratostene2[i] = max(Eratostene2[i], j);
        }
    }
    for (int i = maxx; i >= 0; --i)
    {
        if (Eratostene1[i] != 0 && Eratostene2[i] != 0)
            break;
        else
            nr++;
    }
    cout << maxx - nr;
    return 0;
}