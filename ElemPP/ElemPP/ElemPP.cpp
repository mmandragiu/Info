#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("elempp.in");
ofstream cout("elempp.out");

int main()
{
    int n, x, c;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        c = x;
        while (x > 99)
            x=x/ 10;
        if (sqrt(x) == (int)sqrt(x))
            cout << c << " ";
    }
    return 0;
}