#include <iostream>
using namespace std;

struct date {
    int an, luna, zi;
};

date persoane[1005];

int main()
{
    int n, poz_cel_mai_mic = -1, poz_cel_mai_mare = -1, poz[1005];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> persoane[i].an >> persoane[i].luna >> persoane[i].zi;
        poz[i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (persoane[j].an > persoane[i].an)
            {
                swap(persoane[j], persoane[i]);
                swap(poz[j], poz[i]);
            }
            else
            {
                if (persoane[j].an == persoane[i].an)
                {
                    if (persoane[j].luna > persoane[i].luna)
                    {
                        swap(persoane[j], persoane[i]);
                        swap(poz[j], poz[i]);
                    }
                    else
                    {
                        if (persoane[j].luna == persoane[i].luna)
                        {
                            if (persoane[j].zi > persoane[i].zi)
                            {
                                swap(persoane[j], persoane[i]);
                                swap(poz[j], poz[i]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (persoane[1].an == persoane[2].an && persoane[1].luna == persoane[2].luna && persoane[1].zi == persoane[2].zi)
    {
        int i = 1;
        while (persoane[i].an == persoane[i + 1].an && persoane[i].luna == persoane[i + 1].luna && persoane[i].zi == persoane[i + 1].zi)
        {
            i++;
            poz_cel_mai_mic = min(poz_cel_mai_mic, poz[i]);
        }
        cout << poz_cel_mai_mic << " ";
    }
    else
        cout << poz[1] << " ";
    if (persoane[n].an == persoane[n - 1].an && persoane[n].luna == persoane[n - 1].luna && persoane[n].zi == persoane[n - 1].zi)
    {
        int i = n;
        while (persoane[i].an == persoane[i - 1].an && persoane[i].luna == persoane[i - 1].luna && persoane[i].zi == persoane[i - 1].zi)
        {
            i--;
            poz_cel_mai_mare = min(poz_cel_mai_mare, poz[i]);
        }
        cout << poz_cel_mai_mare;
    }
    else
        cout << poz[n];
}