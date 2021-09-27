#include <fstream>
using namespace std;
ifstream cin("blackfriday.in");
ofstream cout("blackfriday.out");

int main()
{
    int v1[10], v2[10], procente[10], n,max=0,elemmax=0,poz;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v1[i];
    for (int i = 1; i <= n; i++)
        cin >> v2[i];
    for (int i = 1; i <= n; i++)
        procente[i] = (v1[i]-v2[i]) * 100 / v1[i];
    for (int i = 1; i <= n; i++)
    {
        if (procente[i] > max)
        {
            max = procente[i];
            poz = i;
            elemmax = 1;
        }
        if (procente[i] == max and elemmax != 1)
            elemmax++;
    }
    if (elemmax > 1)
    {
        for (int i = 1; i <= n; i++)
            if (procente[i] == max)
            {
                poz = i;
                break;
            }
        cout << poz;
    }
    else
        cout << poz;
}