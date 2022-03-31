#include <fstream>
#include <algorithm>
using namespace std;

int n, v[101], s, zile, h;

int main()
{
    ifstream in("flori3.in");
    ofstream out("flori3.out");
    in >> n >> h;
    for (int i = 1; i <= n; i++)
    {
        in >> v[i];
        s += v[i];
    }
    s += n * (n + 1) / 2;
    out << s << '\n';
    bool maimare = false;
    int j = 0;
    while (maimare == false)
    {
        j++;
        sort(v + 1, v + n + 1);
        for (int i = 1; i <= j; i++)
        {
            v[i] ++;
            if (v[i] >= h)
            {
                maimare = true;
                break;
            }
        }
        if (maimare == false)
            zile++;
    }
    out << zile;
    return 0;
}