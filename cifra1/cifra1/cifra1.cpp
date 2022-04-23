#include <iostream>
using namespace std;

int cifrenumar(int n)
{
    int cifre = 0;
    while (n)
        cifre++, n /= 10;
    return cifre;
}

int main()
{
    int cifn[11] = { 0 }, n, i, maxx = 0, noun = 0, copie;
    cin >> n;
    i = cifrenumar(n);
    copie = i;
    while (n)
    {
        cifn[i] = n % 10;
        i--;
        n /= 10;
    }
    for (int i = 1; i <= copie; i++)
    {
        noun = 0;
        for (int j = 1; j <= copie; j++) {
            if (i != j)
                noun = noun * 10 + cifn[j];
        }
        maxx = noun > maxx ? noun : maxx;
    }
    cout << maxx;
    return 0;
}