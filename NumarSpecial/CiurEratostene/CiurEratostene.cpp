#include <iostream>
using namespace std;

int Eratostene[1000001] = { 0 };

void CalcEratostene(int* eratostene, int n) {
    eratostene[0] = 1, eratostene[1] = 1;
    for (int i = 2; i < sqrt(n); i++)//calculam ciurul lui eratostene
    {
        if (eratostene[i] == 0)
            for (int j = 2; j <= n / i; j++)
                eratostene[j * i] = 1;
    }
}


int main()
{
    int n, x,prime=0;
    cin >> n;
    //Eratostene[0] = 1, Eratostene[1] = 1;
    //for (int i = 2; i < sqrt(1000000); i++)
    //{
    //    if (Eratostene[i] == 0)
    //        for (int j = 2; j <= 1000000 / i; j++)
    //            Eratostene[j*i] = 1;
    //}

    CalcEratostene(Eratostene, 1000000);
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (Eratostene[x] == 0)
            prime++;
    }
    cout << prime;
}

