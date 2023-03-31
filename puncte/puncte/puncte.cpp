#include <iostream> 
#include <cmath>
#include <iomanip>

using namespace std;

struct coordonata {
    int x, y;
};

coordonata coord;

int main()
{
    double v[105], dist_max = -1000000000;
    int n, nrmax = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> coord.x >> coord.y;
        v[i] = sqrt(coord.x * coord.x + coord.y * coord.y);
    }
    for (int i = 1; i <= n; i++)
    {
        int nr = 0;
        for (int j = 1; j <= n; j++)
            if (v[j] == v[i])
                nr++;
        if (v[i] > dist_max)
        {
            dist_max = v[i];
            nrmax = nr;
        }

    }
    printf("%.3f", dist_max);
    cout << " " << nrmax;
    return 0;
}