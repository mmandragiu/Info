#include <fstream>
using namespace std;
ifstream cin("stele.in");
ofstream cout("stele.out");

int main()
{
    unsigned long long int n, k,nrstea=1,coloana=0,rand=0,poz=1,i=0,nrstea_2=1;
    bool found = false;
    cin >> k>> n;
    for (i = 2; i <= k*2-2; i=i+2)
        nrstea += i;
    i = 2;
    /*
    while (found == false)
    {
        nrstea_2 += i;
        poz++;
        if (n <= nrstea_2 - i/2 + 1 || (n >= nrstea_2 + i/2 - 1 && n < (nrstea + i + 2) - (i + 2) / 2) || nrstea_2 == n)
        {
            coloana = poz;
            rand = nrstea_2 + i / 2 - n + 1;
            found = true;
        }
        i += 2;
    }
    */
    cout << nrstea;
    return 0;
}