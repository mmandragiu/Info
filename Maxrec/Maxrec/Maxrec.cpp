#include <fstream>
using namespace std;
ifstream cin("maxrec.in");
ofstream cout("maxrec.out");

int main()
{
    int n, x, max = -2000000001;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x > max)
            max = x;
    }
    cout << max;
    return 0;
}
