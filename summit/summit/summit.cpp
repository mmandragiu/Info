#include <fstream>
using namespace std;

ifstream in("summit.in");
ofstream out("summit.out");

long long p[1000001];

int cb(int n, int i)
{
    int mid, left = 1, right = i;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (p[mid] == n)
        {
            return mid;
        }
        else
        {
            if (p[mid] < n)
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int n, x;
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        p[i] = p[i - 1] + x;
        int y = cb(x, i);
        if (p[y] == x)
            out << y << '\n';
        else
            out << 0 << '\n';
    }
    return 0;
}