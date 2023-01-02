#include <iostream>
using namespace std;


int main()
{
    int h[100005], n, i, j, sol = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> h[i];
    i = 1, j = n;
    while (i <= j)
    {
        sol = max(sol, (j - i) * min(h[i], h[j]));
        if (h[i] < h[j])
            i++;
        else
            j--;
    }
    cout << sol;
}