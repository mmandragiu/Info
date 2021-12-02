#include <iostream>
using namespace std;

int Cifre6(int n, int k, int nou_n) {
    nou_n = 0;
    int cifn[10] = { 0 }, i = 0;
    while (n)
    {
        cifn[i] = n % 10;
        i++;
        n /= 10;
    }
    for (int x = 0; x < i - 1; x++)
    {
        for(int y=x+1;y<i;y++)
            if (cifn[x] < cifn[y])
            {
                int aux = cifn[x];
                cifn[x] = cifn[y];
                cifn[y] = aux;
            }
    }
    for (int i = 0; i < k; i++)
        nou_n = nou_n * 10 + cifn[i];
    return nou_n;
}

int main()
{
    int n, nou_n = 0;
    cin >> n;
    cout << Cifre6(n, 3, nou_n);
    return 0;
}
