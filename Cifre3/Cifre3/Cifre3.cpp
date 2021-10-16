#include <iostream>
using namespace std;

int main()
{
    int n, cif_pp[10] = { 0 }, cif_cp[10] = { 0 },pp=0,cp=0,i1=0,i2=0,j,k;
    cin >> n;
    bool found = false;
    for (int i = 1; i <= n; i++)
    {
        found = false;
        i1 = 0;
        i2 = 0;
        pp = i * i;
        cp = i * i * i;
        while (pp)
        {
            cif_pp[i1] = pp % 10;
            i1++;
            pp /= 10;
        }
        while (cp)
        {
            cif_cp[i2] = cp % 10;
            i2++;
            cp /= 10;
        }
        for (j = 0; j < i1; j++)
        {
            for (k = 0; k < i2; k++)
            {
                if (cif_pp[j] != cif_cp[k])
                    found = true;
                else
                {
                    found = false;
                    break;
                }
            }
            if (found == false)
                break;
            else
                continue;
        }
        if (found == true)
            cout << i << " ";
        for (i1 = 0; i1 < 10; i1++) cif_pp[i1] = 0;
        for (i2 = 0; i2 < 10; i2++) cif_cp[i2] = 0;
    }
}