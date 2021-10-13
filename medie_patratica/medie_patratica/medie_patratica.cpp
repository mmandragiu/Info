#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n, x, sum = 0;
    float media = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        sum += x * x;
    }
    media = sqrt((float)sum / n);
    cout << fixed << setprecision(2) << media;
    return 0;
}