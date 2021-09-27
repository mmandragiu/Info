#include <fstream>
using namespace std;
ifstream cin("permutari2.in");
ofstream cout("permutari2.out");

int n, a[10], x[10], P[10];

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << a[x[i]] << ' ';
    cout << '\n';
}

void back(int k) {
    for (int i = 1; i <= n; i++)
    {
        if (!P[i])
        {
            P[i] = 1;
            x[k] = i;
            if (k < n)
                back(k + 1);
            else
                afis();
            P[i] = 0;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[j] < a[i])
                swap(a[i], a[j]);
    back(1);
    return 0;
}