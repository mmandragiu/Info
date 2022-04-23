#include <fstream>
using namespace std;

bool Prim[4000001] = { 0 };
int n, c, x, y, cnt, dist_st, dist_dr;

int main()
{
    ifstream in("apropiate1.in");
    ofstream out("apropiate1.out");
    Prim[0] = 1, Prim[1] = 1;
    for (int i = 2; i * i < 4000000; i++)
    {
        if (Prim[i] == 0)
            for (int j = 2; j <= 4000000 / i; j++)
                Prim[j * i] = 1;
    }
    in >> n >> c;
    for (int i = 1; i <= n; i++)
    {
        in >> cnt;
        if (Prim[cnt] == 0)
            out << cnt << " ";
        else
        {
            bool foundx = false, foundy = false;
            x = cnt, y = cnt;
            while (foundx!=true || foundy!=true)
            {
                if (Prim[x] == 0 && foundx != true)
                    foundx = true;
                if (Prim[y] == 0 && !foundy)
                    foundy = true;
                if(foundx!=true)
                    x--;
                if(foundy!=true)
                    y++;
            }
            dist_st = cnt - x;
            dist_dr = y - cnt;
            if (dist_st < dist_dr)
                out << x << " ";
            else
            {
                if (dist_st > dist_dr)
                    out << y << " ";
                else
                {
                    if (dist_st == dist_dr)
                    {
                        if (c == 1)
                            out << x << " ";
                        else
                            out << y << " ";
                    }
                }
            }
        }
    }
    out.close();
    return 0;
}