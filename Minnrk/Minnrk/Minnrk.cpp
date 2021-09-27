#include <fstream>
using namespace std;
ifstream cin("minnrk.in");
ofstream cout("minnrk.out");

int main()
{
    int n, k, aparitii_cif[10] = { 0 }, contor = 0,cifmin;
    cin >> n >> k;
    while (n)
    {
        aparitii_cif[n % 10]++;
        n /= 10;
    }
    while (contor < k)
    {
        if (aparitii_cif[0] > 0)
        {
            for(int i=1;i<=9;i++)
                if (aparitii_cif[i] > 0)
                {
                    cout << i;
                    aparitii_cif[i]--;
                    contor++;
                    break;
                }
            for (int i = 0; i <= 9; i++)
            {
                if (aparitii_cif[i] > 0)
                    for (int i2 = 1; i2 <= aparitii_cif[i]; i2++)
                    {
                        if (contor == k)
                            break;
                        else
                            contor++;
                        cout << i;
                    }
            }
        }
        else
        {
            for (int i = 1; i <= 9; i++)
            {
                if (aparitii_cif[i] > 0)
                    for (int i2 = 1; i2 <= 9; i2++)
                    {
                        if (contor == k)
                            break;
                        else
                            contor++;
                        cout << i2;
                    }
            }

        }
    }
    return 0;
}