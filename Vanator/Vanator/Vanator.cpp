#include <fstream>
#include <algorithm>
using namespace std;
bool prim(int n) {
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
    ifstream cin("vanator.in");
    ofstream cout("vanator.out");
    long long n, g, k, f1, f2, f3, hh, mm,kg=0;
    int greutati[1001];
    char time[5];
    cin >> n >> g;
    for (int i = 1; i <= n; i++)
        cin >> greutati[i];
    cin>> k >> f1 >> f2 >> f3 >> time;
    hh = (int)time[0] * 10 + (int) time[1];
    mm = (int)time[3] * 10 + (int)time[4];
    sort(greutati, greutati + n + 1);
    for (int i = n; i >= n - g + 1; i--)
        if (prim(greutati[i]) == false)
            kg += greutati[i];

}