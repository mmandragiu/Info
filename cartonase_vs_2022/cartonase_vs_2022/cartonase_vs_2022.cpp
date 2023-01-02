#include <fstream>
using namespace std;

ifstream in("cartonase.in");
ofstream out("cartonase.out");

int main()
{
    int c, n, s, d, prevd, max_potrivesc = 0, secv_max = 0;
    bool se_potrivesc = false;
    in >> c >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> s >> d;
        if (i == 1)
        {
            prevd = d;
        }
        else
        {
            if (s == prevd && se_potrivesc == true)
                max_potrivesc++;
            else
            {
                if (s == prevd && se_potrivesc == false)
                    max_potrivesc = 1, secv_max++;
                else
                {
                    if()
                }
            }
        }
    }
}