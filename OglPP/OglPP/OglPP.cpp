#include <iostream>
#include <cmath>
using namespace std;

bool Palindrom(int n)
{
    int cifre[10] = { 0 },i1=0;
    bool found = false;
    while (n)
    {
        cifre[i1] = n % 10;
        i1++;
        n /= 10;
    }
    for (int i = 0; i < n / 2 - 1; i++)
    {
        if (cifre[i] == cifre[n - i - 1])
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
    int a, b, c = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if(Palindrom(i)==true)
            if (sqrt(i) == (int)sqrt(i))
                c++;
    }
    cout << c;
    return 0;
}