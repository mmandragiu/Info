#include <iostream>
using namespace std;

int main()
{
    int c, n,nr_spatii=0,indice=1,x=1,x1=1;
    cin >> c >> n;
    if (c == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cout << i;
            cout << '\n';
        }
    }
    if (c == 2)
    {
        nr_spatii = n - 1;
        for (int i = 1; i < n; i++)
        {
            for (int k = 1; k <= nr_spatii; k++)
                cout << " ";
            for (int j = 1; j <= x1; j++)
                cout << i;
            cout << '\n';
            nr_spatii--;
            x1 += 2;
        }
        for (int i = 1; i <= n*2-1; i++)
            cout << n;
        cout << '\n';
        nr_spatii = 1;
        x1 = n * 2 - 3;
        for (int i = n-1; i >=1; i--)
        {
            for (int k = 1; k <= nr_spatii; k++)
                cout << " ";
            for (int j = 1; j <= x1; j++)
                cout << i;
            cout << '\n';
            nr_spatii++;
            x1 -= 2;
        }
    }
    if (c == 3)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n * 2; j++)
                cout << i;
            cout << '\n';
        }
    }
    if (c == 4)
    {
        nr_spatii = n - 1;
        while (nr_spatii >= 0)
        {
            for (int i = 1; i <= nr_spatii; i++)
                cout << " ";
            for (int i = 1; i <= indice; i++)
                cout << x ;
            indice+=2;
            nr_spatii--;
            x++;
            cout << '\n';
        }
    }
    return 0;
}