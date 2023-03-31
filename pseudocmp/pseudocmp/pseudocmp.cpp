#include <fstream>
using namespace std;

long long a[100005], s[100005], perechi, x, y, n, c, nou_a[100005], frq[1000000], maxim, freq[105];

int sumcif(int x)
{
    int s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main()
{
    ifstream in("pseudocmp.in");
    ofstream out("pseudocmp.out");
    in >> c >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> a[i];
        maxim = max(a[i], maxim);
        frq[a[i]]++;
    }
    int k = 1;
    for (int i = 1; i <= maxim; i++)
    {
        while (frq[i])
        {
            nou_a[k] = i;
            s[k] = sumcif(i);
            frq[i]--;
            k++;
        }
    }
    if (c == 1)
    {
        bool found = false;
        for (int i = 1; i < n; i++)
        {
            if (s[i] > s[i + 1])
            {
                found = true;
                x = nou_a[i];
                y = nou_a[i + 1];
                break;
            }
        }
        if (found)
            out << x << " " << y;
        else
            out << -1;
    }
    else
    {
        long long sum = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = s[i] + 1; j <= 54; j++)
                sum += freq[j];
            freq[s[i]]++;
        }
        out << sum;
    }
    return 0;
}