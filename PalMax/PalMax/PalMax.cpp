#include <iostream>
using namespace std;

bool Palindrom(unsigned long long n)
{
    int cifre[9] = { 0 }, i = 0;
    bool found = false;
    while (n)
    {
        cifre[i] = n % 10;
        i++;
        n /= 10;
    }
    for (int j = 0; j < i / 2; j++)
    {
        if (cifre[j] == cifre[i - j - 1])
            found = true;
        else
        {
            found = false;
            break;
        }
    }
    if (found == true)
        return true;
    else
        return false;
}

int main()
{
    long long x, nrmax=-1000000001, aparitii = 0; 
    cin >> x;
    while(x!=0)
    {
        if (Palindrom(x) == true)
        {
            if (x > nrmax)
            {
                nrmax = x;
                aparitii = 1;
            }
            else
            {
                if (x == nrmax)
                    aparitii++;
            }
        }
        cin >> x;
    }
    if (nrmax == -1000000001)
        cout << "NU EXISTA";
    else
        cout << nrmax<<" "<<aparitii;
}