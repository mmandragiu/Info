#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string c;
    int n, st = 0, dr = 4, cnt = 0;
    getline(cin, c);
    n = c.size();
    for (int i = 0; i < n - 5 + 1; i++)
    {
        int stele = 0, plusuri = 0, minusuri = 0;
        // string subsir = "     ";
        char* subsir = new char[5];
        bool oka = false, okd = false, oko = false, okb = false, oke = false;
        int contor = 0;
        for (int j = st; j <= dr; j++)
        {
            subsir[contor] = tolower(c[j]);
            if (c[j] == '+')
                plusuri++;
            if (c[j] == '*')
                stele++;
            if (c[j] == '-')
                minusuri++;
            contor++;
        }
        for (int j = 0; j < 5; j++)
        {
            if (subsir[j] == 'a')
                oka = true;
            if (subsir[j] == 'd')
                okd = true;
            if (subsir[j] == 'o')
                oko = true;
            if (subsir[j] == 'b')
                okb = true;
            if (subsir[j] == 'e')
                oke = true;
        }
        if (!oka)
        {
            if (minusuri > 0)
            {
                minusuri--;
                oka = true;
            }
            else
            {
                if (minusuri <= 0)
                {
                    if (stele > 0)
                    {
                        stele--;
                        oka = true;
                    }
                }
            }
        }
        if (!okb)
        {
            if (plusuri > 0)
            {
                plusuri--;
                okb = true;
            }
            else
            {
                if (plusuri <= 0)
                {
                    if (stele > 0)
                    {
                        stele--;
                        okb = true;
                    }
                }
            }
        }
        if (!okd)
        {
            if (plusuri > 0)
            {
                plusuri--;
                okd = true;
            }
            else
            {
                if (plusuri <= 0)
                {
                    if (stele > 0)
                    {
                        stele--;
                        okd = true;
                    }
                }
            }
        }
        if (!oke)
        {
            if (minusuri > 0)
            {
                minusuri--;
                oke = true;
            }
            else
            {
                if (minusuri <= 0)
                {
                    if (stele > 0)
                    {
                        stele--;
                        oke = true;
                    }
                }
            }
        }
        if (!oko)
        {
            if (minusuri > 0)
            {
                minusuri--;
                oko = true;
            }
            else
            {
                if (minusuri <= 0)
                {
                    if (stele > 0)
                    {
                        stele--;
                        oko = true;
                    }
                }
            }
        }
        if (oka && okd && oko && okb && oke)
            cnt++;
        st++;
        dr++;
    }
    cout << cnt;
}