#include <iostream>
using namespace std;

int main()
{
    int s, n, x, poz = 0, min = 1001;
    cin >> s >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x < min)
        {
            min = x;
            poz = i;
        }
    }
    cout << s / min << " " << poz;
    return 0;
}