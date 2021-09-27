#include <iostream>
using namespace std;

int main()
{
    int s, d, r, m;
    cin >> s >> d >> r >> m;
    if (s < m)
        cout << "nimic";
    if (s < r and s >= m)
        cout << "masina";
    if (s < d and s >=r and s > m)
        cout << "robot";
    if (s >= d and s > r and s > m)
        cout << "drona";
    return 0;
}