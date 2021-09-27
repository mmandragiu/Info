#include <iostream>
using namespace std;

int main()
{
    int n, c1, c2, ultimcif, v[10] = { 0 }, i = 1;
    cin >> n >> c1 >> c2;
    if (n == 0)
    {
        cout << c2;
        return 0;
    }
    while (n != 0)
    {
        ultimcif = n % 10;
        if (ultimcif == c1)
        {
            v[i] = c2;
            i++;
        }   
        else
        {
            v[i] = ultimcif;
            i++;
        }
           n = n / 10;
    }
    for (int iterator = i-1; iterator >= 1; iterator--)
        cout << v[iterator];
    return 0;
}