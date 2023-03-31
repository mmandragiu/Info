#include <fstream>
using namespace std;

ifstream in("zar.in");
ofstream out("zar.out");

int main()
{
    int directie = 1, f1, f2, f3, n, r, k;
    //1=dreapta,2=jos,3=stanga,4=sus
    in >> n >> k >> f1 >> f2 >> f3;
    if (k < n)
    {
        for (int i = 1; i <= k; i++)
        {
            int aux = f2;
            f2 = 7 - f3;
            f3 = aux;
        }
        out << f1 << " " << f2 << " " << f3;
    }
    else
    {
        r = k % n;
        while (k > r)
        {
            int minn;
            if (k < n - 1)
                minn = k;
            else
                minn = n - 1;
            if (directie == 1)
            {
                for (int i = 1; i <= minn; i++)
                {
                    int aux = f3;
                    f3 = f2;
                    f2 = 7 - aux;
                    k--;
                }
                directie = 2;
                continue;
            }
            if (directie == 2)
            {
                for (int i = 1; i <= minn; i++)
                {
                    int aux = f1;
                    f1 = f2;
                    f2 = 7 - aux;
                    k--;
                }
                directie = 3;
                continue;
            }
            if (directie == 3)
            {
                for (int i = 1; i <= minn; i++)
                {
                    int aux = f3;
                    f3 = 7 - f2;
                    f2 = aux;
                    k--;
                }
                directie = 4;
                continue;
            }
            if (directie == 4)
            {
                for (int i = 1; i <= minn; i++)
                {
                    int aux = f2;
                    f2 = f1;
                    f1 = 7 - aux;
                    k--;
                }
                directie = 1;
                continue;
            }
        }
        if (k > 0)
        {
            if (directie == 1)
            {
                for (int i = 1; i <= r; i++)
                {
                    int aux = f3;
                    f3 = f2;
                    f2 = 7 - aux;
                }
            }
            if (directie == 2)
            {
                for (int i = 1; i <= r; i++)
                {
                    int aux = f1;
                    f1 = f2;
                    f2 = 7 - aux;
                }
            }
            if (directie == 3)
            {
                for (int i = 1; i <= r; i++)
                {
                    int aux = f3;
                    f3 = 7 - f2;
                    f2 = aux;
                }
            }
            if (directie == 4)
            {
                for (int i = 1; i <= r ; i++)
                {
                    int aux = f2;
                    f2 = f1;
                    f1 = 7 - aux;
                }
            }
        }
        out << f1 << " " << f2 << " " << f3;
    }
}