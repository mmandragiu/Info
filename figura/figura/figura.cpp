#include <fstream>
using namespace std;

int d, n, x, y, s;
bool a[21][21];

int main()
{
    ifstream in("figura.in");
    ofstream out("figura.out");
    in >> d >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x >> y;
        a[x][y] = true;
    }
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            if (a[i][j] == true)
            {
                while (a[i][j])
                    j++;
                j--;
                s++;
            }
        }
    }
    for (int j = 1; j <= d; j++)
    {
        for (int i = 1; i <= d; i++)
        {
            if (a[i][j] == true) {
                while (a[i][j])
                    i++;
                i--;
                s++;
            }
        }
    }
    s *= 2;
    out << s;
}