#include <iostream>
#include <bitset>
using namespace std;

bitset<200000> apare_1;
bitset<200000> apare_2;
int x, cnt;

int main()
{
    while (cin >> x)
    {
        if (apare_1[x] == 0)
            apare_1[x] = 1;
        else
        {
            if (apare_1[x] == 1)
                apare_2[x] = 1;
        }
    }
    for (int i = 0; i <= 200000; i++)
        if (apare_1[i] == 1 && apare_2[i] == 0)
            cnt++;
    cout << cnt;
    return 0;
}