#include <iostream>
using namespace std;

int main()
{
    int m, n, max = -1000000, CNT = 0, T,clasa=0,aparitie=0;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int i2 = 1; i2 <= n; i2++)
        {
            cin >> T;
            if (T > max )
            {
                max = T;
                CNT = 1;
                clasa = 1;
            }
            else
            {
                if (T == max && aparitie==0)
                {
                    aparitie = 1;
                    if(clasa==0)
                        CNT++;
                }
            }
        }
        aparitie = 0;
        clasa = 0;
    }
    cout << max << " " << CNT;
    return 0;
}