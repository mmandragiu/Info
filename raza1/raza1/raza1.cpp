#include <fstream>
using namespace std;

int t, n, s, l, c, r, rovere, unu[100005], doi[100005], prd[100005], rovers_max, sec;

int main()
{
    ifstream in("raza.in");
    ofstream out("raza.out");
    in >> t >> n >> s;
    if (t == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            in >> l >> c >> r;
            if (l <= c + r - 1 && l + r - 1 >= c)
                rovere++;
        }
        out << rovere;
    }
    if (t == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            in >> l >> c >> r;
            prd[i] = 4 * (r - 1);
            bool found = false;
            int l1 = l, c1 = c, intalnire = 0, sec = 1;
            for (int i1 = c; i1 <= c + r - 1; i1++)
            {
                if (l1 == c1)
                {
                    if (intalnire == 0)
                    {
                        intalnire++;
                        unu[i] = sec;
                    }
                    else
                    {
                        if (intalnire == 1)
                        {
                            intalnire++;
                            doi[i] = sec;
                        }
                    }
                }
                sec++;
                c1++;
            }
            for (int i1 = l + 1; i1 <= l + r - 1; i1++)
            {
                if (l1 == c1)
                {
                    if (intalnire == 0)
                    {
                        intalnire++;
                        unu[i] = sec;
                    }
                    else
                    {
                        if (intalnire == 1)
                        {
                            intalnire++;
                            doi[i] = sec;
                        }
                    }
                }
                l1++;
            }
            for (int i1 = c + r - 2; i1 >= c; i1--)
            {
                if (l1 == c1)
                {
                    if (intalnire == 0)
                    {
                        intalnire++;
                        unu[i] = sec;
                    }
                    else
                    {
                        if (intalnire == 1)
                        {
                            intalnire++;
                            doi[i] = sec;
                        }
                    }
                }
                c1--;
            }
            for (int i1 = l + r - 2; i1 >= l; i1--)
            {
                if (l1 == c1)
                {
                    if (intalnire == 0)
                    {
                        intalnire++;
                        unu[i] = sec;
                    }
                    else
                    {
                        if (intalnire == 1)
                        {
                            intalnire++;
                            doi[i] = sec;
                        }
                    }
                }
                l1--;
            }
        }
        for (int i = 1; i <= s; i++)
        {
            int rovers = 0;
            for (int j = 1; j <= 10000; j++)
            {
                if (unu[j] == i)
                    rovers++;
                if (doi[j] == i)
                    rovers++;
            }
            if (rovers > rovers_max)
            {
                rovers_max = rovers;
                sec = i;
            }
        }
        out << rovers_max << " " << sec;
    }
    return 0;
}